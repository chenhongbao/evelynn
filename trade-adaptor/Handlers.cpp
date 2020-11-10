#include "Global.h"
#include "Handlers.h"
#include "Logger.h"
#include "QryQue.h"
#include "ReqQue.h"

#include "../proto/adaptor/Msg.Qry.CommissionRate.pb.h"
#include "../proto/adaptor/Msg.Qry.Instrument.pb.h"
#include "../proto/adaptor/Msg.Qry.MarginRate.pb.h"
#include "../proto/adaptor/Msg.Req.Authenticate.pb.h"
#include "../proto/adaptor/Msg.Req.OrderAction.pb.h"
#include "../proto/adaptor/Msg.Req.OrderInsert.pb.h"
#include "../proto/adaptor/Msg.Req.SettlementConfirm.pb.h"
#include "../proto/adaptor/Msg.Req.UserLogin.pb.h"
#include "../proto/adaptor/Msg.Req.UserLogout.pb.h"

bool programExit = true;
CThostFtdcReqAuthenticateField reqAuthenticateField = {0};
CThostFtdcReqUserLoginField reqUserLoginField = {0};
CThostFtdcSettlementInfoConfirmField settlementConfirmField = {0};

#define LOG_CODE(CODE, MSG) WriteCode(CODE, __LINE__, __FILE__, __func__, MSG)

#define REPLY_IF_ERROR(CODE, RSP, REQUESTID) \
  {                                          \
    if (CODE != 0) {                         \
      ReplyError(RSP, CODE, REQUESTID);      \
    }                                        \
  }

void ReplyError(RspQueue& rsp, int code, int requestId) {
  CThostFtdcRspInfoField m;
  m.ErrorID = code;
  FILL_CODE_MSG(code, m.ErrorMsg);
  LOG_CODE(rsp.Enqueue(&m, requestId, true), __func__);
}

#define STRNCPY(DEST, SRC) strncpy_s(DEST, SRC, sizeof(DEST) - 1)

void OnReqAuthenticate(natsConnection* conn,
                       natsSubscription* sub,
                       natsMsg* message,
                       void* closure) {
  msg::req::ReqAuthenticateMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_AUTHENTICATE_MSG,
             "Parse request authenticate message.");
  } else {
    CThostFtdcReqAuthenticateField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.authenticate();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.UserID, u.user_id().c_str());
    STRNCPY(a.UserProductInfo, u.user_product_info().c_str());
    STRNCPY(a.AuthCode, u.auth_code().c_str());
    STRNCPY(a.AppID, u.app_id().c_str());

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.req.Enqueue(&a, requestId), p.rsp, requestId);
    reqAuthenticateField = a;
  }

  natsMsg_Destroy(message);
}

void OnReqLogin(natsConnection* conn,
                natsSubscription* sub,
                natsMsg* message,
                void* closure) {
  msg::req::ReqUserLoginMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_USER_LOGIN_MSG, "Parse login request message.");
  } else {
    CThostFtdcReqUserLoginField a = {0};
    auto p = *(QueuePack*)closure;
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

void OnReqSettlementConfirm(natsConnection* conn,
                            natsSubscription* sub,
                            natsMsg* message,
                            void* closure) {
  msg::req::ReqSettlementConfirmMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_SETTLEMENT_MSG,
             "Parse settlement request message.");
  } else {
    CThostFtdcSettlementInfoConfirmField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.confirm();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.InvestorID, u.investor_id().c_str());

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.req.Enqueue(&a, requestId), p.rsp, requestId);
    settlementConfirmField = a;
  }

  natsMsg_Destroy(message);
}

void OnReqLogout(natsConnection* conn,
                 natsSubscription* sub,
                 natsMsg* message,
                 void* closure) {
  msg::req::ReqUserLogoutMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_USER_LOGOUT_MSG, "Parse logout request message.");
  } else {
    CThostFtdcUserLogoutField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.logout();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.UserID, u.user_id().c_str());

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.req.Enqueue(&a, requestId), p.rsp, requestId);
  }

  natsMsg_Destroy(message);
}

void OnReqOrderInsert(natsConnection* conn,
                      natsSubscription* sub,
                      natsMsg* message,
                      void* closure) {
  msg::req::ReqOrderInsertMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_ORDER_INSERT_MSG, "Parse order insert message.");
  } else {
    CThostFtdcInputOrderField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.input_order();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.InvestorID, u.investor_id().c_str());
    STRNCPY(a.ExchangeID, u.exchange_id().c_str());
    STRNCPY(a.InstrumentID, u.instrument_id().c_str());
    STRNCPY(a.UserID, u.user_id().c_str());
    a.OrderPriceType = u.order_price_type();
    a.Direction = u.direction();
    a.CombOffsetFlag[0] = u.comb_offset_flag();
    a.CombHedgeFlag[0] = u.comb_hedge_flag();
    a.LimitPrice = u.limit_price();
    a.VolumeTotalOriginal = u.volume_total_original();
    a.TimeCondition = u.time_condition();
    a.VolumeCondition = u.volume_condition();
    a.MinVolume = u.min_volume();
    a.ContingentCondition = u.contigent_condition();
    a.StopPrice = u.stop_price();
    a.ForceCloseReason = u.force_close_reason();
    a.IsAutoSuspend = u.is_auto_suspend();

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.req.Enqueue(&a, requestId), p.rsp, requestId);
  }

  natsMsg_Destroy(message);
}

void OnReqOrderAction(natsConnection* conn,
                      natsSubscription* sub,
                      natsMsg* message,
                      void* closure) {
  msg::req::ReqOrderActionMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_REQ_ORDER_ACTION_MSG, "Parse order action message.");
  } else {
    CThostFtdcInputOrderActionField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.order_action();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.InvestorID, u.investor_id().c_str());
    STRNCPY(a.UserID, u.user_id().c_str());
    STRNCPY(a.ExchangeID, u.exchange_id().c_str());
    STRNCPY(a.InstrumentID, u.instrument_id().c_str());
    a.ActionFlag = u.action_flag();
    if (u.order_sys_id().size() < 1) {
      a.FrontID = u.front_id();
      a.SessionID = u.session_id();
      STRNCPY(a.OrderRef, u.order_ref().c_str());
    } else {
      STRNCPY(a.OrderSysID, u.order_sys_id().c_str());
    }

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.req.Enqueue(&a, requestId), p.rsp, requestId);
  }

  natsMsg_Destroy(message);
}

void OnReqExit(natsConnection*, natsSubscription*, natsMsg*, void*) {
  SignalExit();
}

void OnQryInstrument(natsConnection* conn,
                     natsSubscription* sub,
                     natsMsg* message,
                     void* closure) {
  msg::qry::QryInstrumentMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_QRY_INSTRUMENT_MSG, "Parse qry instrument message.");
  } else {
    CThostFtdcQryInstrumentField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.instrument();

    STRNCPY(a.InstrumentID, u.instrument_id().c_str());
    STRNCPY(a.ExchangeID, u.exchange_id().c_str());

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.qry.Enqueue(&a, requestId), p.rsp, requestId);
  }

  natsMsg_Destroy(message);
}

void OnQryCommission(natsConnection* conn,
                     natsSubscription* sub,
                     natsMsg* message,
                     void* closure) {
  msg::qry::QryCommissionRateMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_QRY_COMMISSION_MSG, "Parse qry commission message.");
  } else {
    CThostFtdcQryInstrumentCommissionRateField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.commission_rate();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.InvestorID, u.investor_id().c_str());
    STRNCPY(a.InstrumentID, u.instrument_id().c_str());

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.qry.Enqueue(&a, requestId), p.rsp, requestId);
  }

  natsMsg_Destroy(message);
}

void OnQryMargin(natsConnection* conn,
                 natsSubscription* sub,
                 natsMsg* message,
                 void* closure) {
  msg::qry::QryMarginRateMsg m;

  auto bytes = natsMsg_GetData(message);
  auto length = natsMsg_GetDataLength(message);

  if (!m.ParseFromArray(bytes, length)) {
    LOG_CODE(ERROR_PARSE_QRY_MARGIN_MSG, "Parse qry margin message.");
  } else {
    CThostFtdcQryInstrumentMarginRateField a = {0};
    auto p = *(QueuePack*)closure;
    auto u = m.margin_rate();

    STRNCPY(a.BrokerID, u.broker_id().c_str());
    STRNCPY(a.InvestorID, u.investor_id().c_str());
    STRNCPY(a.InstrumentID, u.instrument_id().c_str());
    a.HedgeFlag = u.hedge_flag();

    auto requestId = m.request_id();
    REPLY_IF_ERROR(p.qry.Enqueue(&a, requestId), p.rsp, requestId);
  }

  natsMsg_Destroy(message);
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
