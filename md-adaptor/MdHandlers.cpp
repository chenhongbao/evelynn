#include "MdGlobal.h"
#include "MdHandlers.h"
#include "adaptor/Msg.Req.UserLogin.pb.h"
#include "adaptor/Msg.Sub.MarketData.pb.h"
#include "Logger.h"
#include "RspMd.h"

bool programExit = true;
CThostFtdcReqUserLoginField reqUserLoginField = {0};
std::set<std::string> subscribedInstruments;

#define LOG_CODE(CODE, MSG) WriteCode(CODE, __LINE__, __FILE__, __func__, MSG)

#define REPLY_IF_ERROR(CODE, RSP, REQUESTID) \
  {                                          \
    if (CODE != 0) {                         \
      ReplyError(RSP, CODE, REQUESTID);      \
    }                                        \
  }

void ReplyError(RspMarketData& rsp, int code, int requestId) {
  CThostFtdcRspInfoField m;
  m.ErrorID = code;
  FILL_CODE_MSG(code, m.ErrorMsg);
  LOG_CODE(rsp.Enqueue(&m, requestId, true), __func__);
}

#define STRNCPY(DEST, SRC) strncpy_s(DEST, SRC, sizeof(DEST) - 1)

void OnReqLogin2(natsConnection* conn,
                 natsSubscription* sub,
                 natsMsg* message,
                 void* closure) {
  msg::req::ReqUserLoginMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_USER_LOGIN_2_MSG, "Parse login request message.");
  } else {
    CThostFtdcReqUserLoginField a = {0};
    auto p = *(MdPack*)closure;
    auto u = m.login();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.UserID, u.user_id().c_str());
    STRNCPY(a.Password, u.password().c_str());

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.req.Enqueue(&a, requestId), p.rsp, requestId);
    reqUserLoginField = a;
  }

  natsMsg_Destroy(message);
}

void OnSubMarketData(natsConnection* conn,
                     natsSubscription* sub,
                     natsMsg* message,
                     void* closure) {
  msg::sub::SubMarketDataMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_USER_LOGIN_2_MSG, "Parse login request message.");
  } else {
    auto p = *(MdPack*)closure;
    auto u = m.subscribe();
    auto count = u.count();
    if (count < 1) {
      LOG_CODE(ERROR_EMPTY_SUBSCRIPTION, "No subscribing instruments.");
      return;
    }

    subscribedInstruments.clear();

    char** pp = new char*[count];
    for (int i = 0; i < count; ++i) {
      pp[i] = new TThostFtdcInstrumentIDType{0};
      auto& instrument = u.instrument_id(i);
      strncpy_s(pp[i], sizeof(TThostFtdcInstrumentIDType), instrument.c_str(),
                sizeof(TThostFtdcInstrumentIDType) - 1);
      subscribedInstruments.insert(u.instrument_id().Get(i));
    }
    REPLY_IF_ERROR(p.req.Enqueue(pp, count), p.rsp, 0);
    /*
     * Clear up memory.
     */
    for (int i = 0; i < count; ++i) {
      delete[] pp[i];
    }
    delete[] pp;
  }

  natsMsg_Destroy(message);
}

void OnReqExit2(natsConnection*, natsSubscription*, natsMsg*, void*) {
  SignalExit();
}

std::mutex mtx;
std::condition_variable cv;

void WaitExit() {
  std::unique_lock<std::mutex> lock(mtx);
  cv.wait(lock, []() -> bool { return programExit; });
}

void SignalExit() {
  programExit = true;
  cv.notify_all();
}
