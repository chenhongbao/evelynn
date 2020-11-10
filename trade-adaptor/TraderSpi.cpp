#include "Global.h"
#include "TraderSpi.h"
#include "Logger.h"

#define LOG_CODE(CODE) WriteCode(CODE, __LINE__, __FILE__, __func__)

#define RETURN_IF_NULL(PTR)             \
  {                                     \
    if (PTR == NULL) {                  \
      LOG_CODE(ERROR_RSP_ARGS_NULLPTR); \
      return;                           \
    }                                   \
  }

TraderSpi::TraderSpi(RspQueue& rspQueue, Reconnecter& reconn)
    : rsp(rspQueue), reConn(reconn), autoReconnect(false) {}

TraderSpi::~TraderSpi() {}

void TraderSpi::OnFrontConnected() {
  if (autoReconnect) {
    reConn.reconnect();
  }
}

void TraderSpi::OnFrontDisconnected(int nReason) {
  LOG_CODE(nReason);
}

void TraderSpi::OnRspAuthenticate(CThostFtdcRspAuthenticateField* data,
                                  CThostFtdcRspInfoField* info,
                                  int requestId,
                                  bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  if (autoReconnect) {
    reConn.OnRspAuthenticate(data, info, requestId, isLast);
  } else {
    LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
  }
}

void TraderSpi::OnRspUserLogin(CThostFtdcRspUserLoginField* data,
                               CThostFtdcRspInfoField* info,
                               int requestId,
                               bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  if (autoReconnect) {
    reConn.OnRspUserLogin(data, info, requestId, isLast);
  } else {
    LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
  }
}

void TraderSpi::OnRspUserLogout(CThostFtdcUserLogoutField* data,
                                CThostFtdcRspInfoField* info,
                                int requestId,
                                bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
  if (info->ErrorID == 0) {
    autoReconnect = false;
  }
}

void TraderSpi::OnErrRtnOrderAction(CThostFtdcOrderActionField* data,
                                    CThostFtdcRspInfoField* info) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info));
}

void TraderSpi::OnErrRtnOrderInsert(CThostFtdcInputOrderField* data,
                                    CThostFtdcRspInfoField* info) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info));
}

void TraderSpi::OnRspOrderInsert(CThostFtdcInputOrderField* data,
                                 CThostFtdcRspInfoField* info,
                                 int requestId,
                                 bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
}

void TraderSpi::OnRspOrderAction(CThostFtdcInputOrderActionField* data,
                                 CThostFtdcRspInfoField* info,
                                 int requestId,
                                 bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
}

void TraderSpi::OnRspSettlementInfoConfirm(
    CThostFtdcSettlementInfoConfirmField* data,
    CThostFtdcRspInfoField* info,
    int requestId,
    bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  if (autoReconnect) {
    reConn.OnRspSettlementInfoConfirm(data, info, requestId, isLast);
  } else {
    LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
    if (info->ErrorID == 0) {
      autoReconnect = true;
    }
  }
}

void TraderSpi::OnRspQryInstrument(CThostFtdcInstrumentField* data,
                                   CThostFtdcRspInfoField* info,
                                   int requestId,
                                   bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
}

void TraderSpi::OnRspQryInstrumentCommissionRate(
    CThostFtdcInstrumentCommissionRateField* data,
    CThostFtdcRspInfoField* info,
    int requestId,
    bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
}

void TraderSpi::OnRspQryInstrumentMarginRate(
    CThostFtdcInstrumentMarginRateField* data,
    CThostFtdcRspInfoField* info,
    int requestId,
    bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(info);
  LOG_CODE(rsp.Enqueue(data, info, requestId, isLast));
}

void TraderSpi::OnRtnOrder(CThostFtdcOrderField* data) {
  RETURN_IF_NULL(data);
  LOG_CODE(rsp.Enqueue(data));
}

void TraderSpi::OnRtnTrade(CThostFtdcTradeField* data) {
  RETURN_IF_NULL(data);
  LOG_CODE(rsp.Enqueue(data));
}

void TraderSpi::OnRspError(CThostFtdcRspInfoField* data,
                           int requestId,
                           bool isLast) {
  RETURN_IF_NULL(data);
  LOG_CODE(rsp.Enqueue(data, requestId, isLast));
}
