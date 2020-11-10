#include "Global.h"
#include "Reconnecter.h"
#include "Logger.h"

#define LOG_CODE(CODE, MSG) WriteCode(CODE, __LINE__, __FILE__, __func__, MSG)

void SendAuthenticate(ReqQueue& req, int& requestId) {
  req.Enqueue(&reqAuthenticateField, ++requestId);
}

void SendLogin(ReqQueue& req, int& requestId) {
  req.Enqueue(&reqUserLoginField, ++requestId);
}

void SendConfirm(ReqQueue& req, int& requestId) {
  req.Enqueue(&settlementConfirmField, ++requestId);
}

Reconnecter::Reconnecter(ReqQueue& q)
    : requestId(0), req(q), exit(false), status(ReconnectStatus::UNKNOWN) {
  new (&daemon) std::thread([this]() -> void {
    while (!exit) {
      {
        std::unique_lock<std::mutex> lock(mtx);
        condition.wait(lock);
      }
      try {
        switch (status) {
          case ReconnectStatus::DISCONNECTED:
            SendAuthenticate(req, requestId);
            break;
          case ReconnectStatus::AUTHENTICATED:
            SendLogin(req, requestId);
            break;
          case ReconnectStatus::LOGIN:
            SendConfirm(req, requestId);
            break;
          case ReconnectStatus::SETTLEMENT_CONFIRMED:
          default:
            break;
        }
      } catch(std::exception& e) {
        LOG_CODE(ERROR_RECONNECT_ANY, e.what());
      }
    }
  });
}

Reconnecter::~Reconnecter() {
  exit = true;
  if (daemon.joinable()) {
    condition.notify_one();
    daemon.join();
  }
}

void Reconnecter::OnRspAuthenticate(CThostFtdcRspAuthenticateField* data,
                                    CThostFtdcRspInfoField* info,
                                    int ignored,
                                    bool isLast) {
  if (info->ErrorID == 0) {
    status = ReconnectStatus::AUTHENTICATED;
  } else {
    LOG_CODE(info->ErrorID, info->ErrorMsg);
  }
  condition.notify_one();
}

void Reconnecter::OnRspUserLogin(CThostFtdcRspUserLoginField* data,
                                 CThostFtdcRspInfoField* info,
                                 int requestId,
                                 bool isLast) {
  if (info->ErrorID == 0) {
    status = ReconnectStatus::LOGIN;
  } else {
    LOG_CODE(info->ErrorID, info->ErrorMsg);
  }
  condition.notify_one();
}

void Reconnecter::OnRspSettlementInfoConfirm(
    CThostFtdcSettlementInfoConfirmField* data,
    CThostFtdcRspInfoField* info,
    int requestId,
    bool isLast) {
  if (info->ErrorID == 0) {
    status = ReconnectStatus::SETTLEMENT_CONFIRMED;
  } else {
    LOG_CODE(info->ErrorID, info->ErrorMsg);
  }
  condition.notify_one();
}

void Reconnecter::reconnect() {
  status = ReconnectStatus::DISCONNECTED;
  condition.notify_one();
}
