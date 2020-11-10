#include "MdGlobal.h"
#include "RspMd.h"
#include "../common/Names.h"
#include "../proto/adaptor/Msg.Rsp.Error.pb.h"
#include "../proto/adaptor/Msg.Rsp.SubMarketData.pb.h"
#include "../proto/adaptor/Msg.Rsp.UserLogin.pb.h"
#include "../proto/adaptor/Msg.Rtn.DepthMarketData.pb.h"
#include "Logger.h"

#define LOG_CODE(CODE, MSG) WriteCode(CODE, __LINE__, __FILE__, __func__, MSG)

void convert(CThostFtdcRspInfoField& from, rsp::ErrorField& to) {
  to.set_error_id(from.ErrorID);
  to.set_error_msg(from.ErrorMsg);
}

void convert(CThostFtdcRspUserLoginField& from, rsp::UserLoginField& to) {
  to.set_trading_day(from.TradingDay);
  to.set_login_time(from.LoginTime);
  to.set_broker_id(from.BrokerID);
  to.set_user_id(from.UserID);
  to.set_system_name(from.SystemName);
  to.set_front_id(from.FrontID);
  to.set_session_id(from.SessionID);
  to.set_max_order_ref(from.MaxOrderRef);
  to.set_shfe_time(from.SHFETime);
  to.set_dce_time(from.DCETime);
  to.set_czce_time(from.CZCETime);
  to.set_ffex_time(from.FFEXTime);
  to.set_ine_time(from.INETime);
}

void convert(CThostFtdcSpecificInstrumentField& from,
             rsp::SpecificInstrumentField& to) {
  to.set_instrument_id(from.InstrumentID);
}

void convert(CThostFtdcDepthMarketDataField& from,
             rtn::DepthMarketDataField& to) {
  to.set_trading_day(from.TradingDay);
  to.set_instrument_id(from.InstrumentID);
  to.set_exchange_id(from.ExchangeID);
  to.set_last_price(from.LastPrice);
  to.set_pre_settlement_price(from.PreSettlementPrice);
  to.set_pre_close_price(from.PreClosePrice);
  to.set_pre_open_interest(from.PreOpenInterest);
  to.set_open_price(from.OpenPrice);
  to.set_highest_price(from.HighestPrice);
  to.set_lowest_price(from.LowestPrice);
  to.set_volume(from.Volume);
  to.set_turn_over(from.Turnover);
  to.set_open_interest(from.OpenInterest);
  to.set_close_price(from.ClosePrice);
  to.set_settlement_price(from.SettlementPrice);
  to.set_upper_limit_price(from.UpperLimitPrice);
  to.set_lower_limit_price(from.LowerLimitPrice);
  to.set_update_time(from.UpdateTime);
  to.set_update_millisec(from.UpdateMillisec);
  to.set_average_price(from.AveragePrice);
  to.set_action_day(from.ActionDay);
  to.set_bid_price(from.BidPrice1);
  to.set_bid_volume(from.BidVolume1);
  to.set_ask_price(from.AskPrice1);
  to.set_ask_volume(from.AskVolume1);
}

RspMarketData::RspMarketData() {
  auto s = natsConnection_ConnectTo(&conn, NATS_DEFAULT_URL);
  if (s != NATS_OK) {
    LOG_CODE(s, "NATS connection.");
    conn = NULL;
  }
}

RspMarketData::~RspMarketData() {
  if (conn != NULL) {
    natsConnection_Destroy(conn);
    conn = NULL;
  }
}

natsStatus RspMarketData::Enqueue(CThostFtdcRspUserLoginField* data,
                                  CThostFtdcRspInfoField* error,
                                  int requestId,
                                  bool isLast) {
  rsp::ErrorField e;
  rsp::UserLoginField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspUserLoginMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_login(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_LOGIN_2_MSG, "Serialize RspUserLoginMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_REQ_LOGIN_2, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspUserLoginMsg.");
  }
  return s;
}

natsStatus RspMarketData::Enqueue(CThostFtdcSpecificInstrumentField* data,
                                  CThostFtdcRspInfoField* error,
                                  int requestId,
                                  bool isLast) {
  rsp::ErrorField e;
  rsp::SpecificInstrumentField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspSubMarketDataMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_instrument(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_SUB_MD_MSG, "Serialize RspSubMarketDataMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_SUB_MD, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspSubMarketDataMsg.");
  }
  return s;
}

natsStatus RspMarketData::Enqueue(CThostFtdcRspInfoField* data,
                                  int requestId,
                                  bool isLast) {
  rsp::ErrorField error;
  convert(*data, error);

  msg::rsp::RspErrorMsg m;
  m.set_allocated_error(&error);
  m.set_request_id(requestId);
  m.set_is_last(isLast);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_ERROR_2_MSG, "Serialize RspErrorMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_ERROR_2, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspErrorMsg.");
  }
  return s;
}

natsStatus RspMarketData::Enqueue(CThostFtdcDepthMarketDataField* data) {
  rtn::DepthMarketDataField field;
  msg::rtn::RtnDepthMarketDataMsg m;

  convert(*data, field);
  m.set_allocated_depth(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RTN_MD_MSG, "Serialize RtnDepthMarketDataMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RTN_MD, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RtnDepthMarketDataMsg.");
  }
  return s;
}

bool RspMarketData::IsConnected() {
  return conn != NULL;
}
