#include "Global.h"
#include "RspQue.h"
#include "common/Names.h"
#include "adaptor/Msg.Rsp.Authenticate.pb.h"
#include "adaptor/Msg.Rsp.CommissionRate.pb.h"
#include "adaptor/Msg.Rsp.Error.pb.h"
#include "adaptor/Msg.Rsp.Instrument.pb.h"
#include "adaptor/Msg.Rsp.MarginRate.pb.h"
#include "adaptor/Msg.Rsp.OrderAction.pb.h"
#include "adaptor/Msg.Rsp.OrderInsert.pb.h"
#include "adaptor/Msg.Rsp.SettlementConfirm.pb.h"
#include "adaptor/Msg.Rsp.UserLogin.pb.h"
#include "adaptor/Msg.Rsp.UserLogout.pb.h"
#include "adaptor/Msg.Rtn.Order.pb.h"
#include "adaptor/Msg.Rtn.Trade.pb.h"
#include "Logger.h"

#define LOG_CODE(CODE, MSG) WriteCode(CODE, __LINE__, __FILE__, __func__, MSG)

#define STRNCPY(DEST, SRC) strncpy_s(DEST, SRC, sizeof(DEST) - 1)

void convert(CThostFtdcRspInfoField& from, rsp::ErrorField& to) {
  to.set_error_id(from.ErrorID);
  to.set_error_msg(from.ErrorMsg);
}

void convert(CThostFtdcInputOrderField& from, req::InputOrderField& to) {
  to.set_broker_id(from.BrokerID);
  to.set_investor_id(from.InvestorID);
  to.set_user_id(from.UserID);
  to.set_instrument_id(from.InstrumentID);
  to.set_exchange_id(from.ExchangeID);
  to.set_order_price_type(from.OrderPriceType);
  to.set_direction(from.Direction);
  to.set_comb_offset_flag(from.CombOffsetFlag[0]);
  to.set_comb_hedge_flag(from.CombHedgeFlag[0]);
  to.set_limit_price(from.LimitPrice);
  to.set_volume_total_original(from.VolumeTotalOriginal);
  to.set_time_condition(from.TimeCondition);
  to.set_volume_condition(from.VolumeCondition);
  to.set_min_volume(from.MinVolume);
  to.set_contigent_condition(from.ContingentCondition);
  to.set_stop_price(from.StopPrice);
  to.set_force_close_reason(from.ForceCloseReason);
  to.set_is_auto_suspend(from.IsAutoSuspend);
}

void convert(CThostFtdcOrderActionField& from,
             CThostFtdcInputOrderActionField& to) {
  STRNCPY(to.BrokerID, from.BrokerID);
  STRNCPY(to.InvestorID, from.InvestorID);
  STRNCPY(to.UserID, from.UserID);
  STRNCPY(to.InstrumentID, from.InstrumentID);
  STRNCPY(to.ExchangeID, from.ExchangeID);
  STRNCPY(to.OrderSysID, from.OrderSysID);
  STRNCPY(to.OrderRef, from.OrderRef);
  to.FrontID = from.FrontID;
  to.SessionID = from.SessionID;
  to.ActionFlag = from.ActionFlag;
}

void convert(CThostFtdcInputOrderActionField& from,
             req::InputOrderActionField& to) {
  to.set_broker_id(from.BrokerID);
  to.set_investor_id(from.InvestorID);
  to.set_user_id(from.UserID);
  to.set_instrument_id(from.InstrumentID);
  to.set_exchange_id(from.ExchangeID);
  to.set_order_sys_id(from.OrderSysID);
  to.set_order_ref(from.OrderRef);
  to.set_front_id(from.FrontID);
  to.set_session_id(from.SessionID);
  to.set_action_flag(from.ActionFlag);
}

void convert(CThostFtdcInstrumentField& from, rsp::InstrumentField& to) {
  to.set_instrument_id(from.InstrumentID);
  to.set_exchange_id(from.ExchangeID);
  to.set_instrument_name(from.InstrumentName);
  to.set_product_id(from.ProductID);
  to.set_product_class(from.ProductClass);
  to.set_delivery_year(from.DeliveryYear);
  to.set_delivery_month(from.DeliveryMonth);
  to.set_max_market_order_volume(from.MaxMarketOrderVolume);
  to.set_min_market_order_volume(from.MinMarketOrderVolume);
  to.set_max_limit_order_volume(from.MaxLimitOrderVolume);
  to.set_min_limit_order_volume(from.MinLimitOrderVolume);
  to.set_volume_multiple(from.VolumeMultiple);
  to.set_price_tick(from.PriceTick);
  to.set_create_date(from.CreateDate);
  to.set_open_date(from.OpenDate);
  to.set_expire_date(from.ExpireDate);
  to.set_start_deliv_date(from.StartDelivDate);
  to.set_end_deliv_date(from.EndDelivDate);
  to.set_is_trading(from.IsTrading);
  to.set_underlying_multiple(from.UnderlyingMultiple);
}

void convert(CThostFtdcInstrumentCommissionRateField& from,
             rsp::CommissionRateField& to) {
  to.set_instrument_id(from.InstrumentID);
  to.set_broker_id(from.BrokerID);
  to.set_investor_id(from.InvestorID);
  to.set_open_ratio_by_money(from.OpenRatioByMoney);
  to.set_open_ratio_by_volume(from.OpenRatioByVolume);
  to.set_close_ratio_by_money(from.CloseRatioByMoney);
  to.set_close_ratio_by_volume(from.CloseRatioByVolume);
  to.set_close_today_ratio_by_money(from.CloseTodayRatioByMoney);
  to.set_close_today_ratio_by_volume(from.CloseTodayRatioByVolume);
  to.set_exchange_id(from.ExchangeID);
}

void convert(CThostFtdcInstrumentMarginRateField& from,
             rsp::MarginRateField& to) {
  to.set_instrument_id(from.InstrumentID);
  to.set_broker_id(from.BrokerID);
  to.set_investor_id(from.InvestorID);
  to.set_hedge_flag(from.HedgeFlag);
  to.set_long_margin_ratio_by_money(from.LongMarginRatioByMoney);
  to.set_long_margin_ratio_by_volume(from.LongMarginRatioByVolume);
  to.set_short_margin_ratio_by_money(from.ShortMarginRatioByMoney);
  to.set_short_margin_ratio_by_volume(from.ShortMarginRatioByVolume);
  to.set_exchange_id(from.ExchangeID);
}

void convert(CThostFtdcRspAuthenticateField& from, rsp::AuthenticateField& to) {
  to.set_broker_id(from.BrokerID);
  to.set_user_id(from.UserID);
  to.set_user_product_info(from.UserProductInfo);
  to.set_app_id(from.AppID);
  to.set_app_type(from.AppType);
}

void convert(CThostFtdcSettlementInfoConfirmField& from,
             req::SettlementConfirmField& to) {
  to.set_broker_id(from.BrokerID);
  to.set_investor_id(from.InvestorID);
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

void convert(CThostFtdcUserLogoutField& from, req::UserLogoutField& to) {
  to.set_broker_id(from.BrokerID);
  to.set_user_id(from.UserID);
}

void convert(CThostFtdcOrderField& from, rtn::OrderField& to) {
  to.set_broker_id(from.BrokerID);
  to.set_investor_id(from.InvestorID);
  to.set_instrument_id(from.InstrumentID);
  to.set_order_ref(from.OrderRef);
  to.set_user_id(from.UserID);
  to.set_direction(from.Direction);
  to.set_comb_offset_flag(from.CombHedgeFlag[0]);
  to.set_comb_hedge_flag(from.CombHedgeFlag[0]);
  to.set_limit_price(from.LimitPrice);
  to.set_volume_total_original(from.VolumeTotalOriginal);
  to.set_time_condition(from.TimeCondition);
  to.set_volume_condition(from.VolumeCondition);
  to.set_min_volume(from.MinVolume);
  to.set_contigent_condition(from.ContingentCondition);
  to.set_stop_price(from.StopPrice);
  to.set_is_auto_suspend(from.IsAutoSuspend);
  to.set_request_id(from.RequestID);
  to.set_order_local_id(from.OrderLocalID);
  to.set_exchange_id(from.ExchangeID);
  to.set_order_submit_status(from.OrderSubmitStatus);
  to.set_trading_day(from.TradingDay);
  to.set_order_sys_id(from.OrderSysID);
  to.set_order_status(from.OrderStatus);
  to.set_volume_traded(from.VolumeTraded);
  to.set_volume_total(from.VolumeTotal);
  to.set_insert_date(from.InsertDate);
  to.set_insert_time(from.InsertTime);
  to.set_active_time(from.ActiveTime);
  to.set_suspend_time(from.SuspendTime);
  to.set_update_time(from.UpdateTime);
  to.set_cancel_time(from.CancelTime);
  to.set_front_id(from.FrontID);
  to.set_session_id(from.SessionID);
  to.set_status_msg(from.StatusMsg);
  to.set_zce_total_traded_volume(from.ZCETotalTradedVolume);
  to.set_account_id(from.AccountID);
  to.set_currency_id(from.CurrencyID);
}

void convert(CThostFtdcTradeField& from, rtn::TradeField& to) {
  to.set_broker_id(from.BrokerID);
  to.set_investor_id(from.InvestorID);
  to.set_instrument_id(from.InstrumentID);
  to.set_order_ref(from.OrderRef);
  to.set_user_id(from.UserID);
  to.set_trade_id(from.TradeID);
  to.set_direction(from.Direction);
  to.set_offset_flag(from.OffsetFlag);
  to.set_hedge_flag(from.HedgeFlag);
  to.set_price(from.Price);
  to.set_volume(from.Volume);
  to.set_trade_date(from.TradeDate);
  to.set_trade_time(from.TradeTime);
  to.set_order_local_id(from.OrderLocalID);
  to.set_trading_day(from.TradingDay);
  to.set_broker_order_seq(from.BrokerOrderSeq);
}

RspQueue::RspQueue() {
  auto s = natsConnection_ConnectTo(&conn, NATS_DEFAULT_URL);
  if (s != NATS_OK) {
    LOG_CODE(s, "NATS connection.");
    conn = NULL;
  }
}

RspQueue::~RspQueue() {
  if (conn != NULL) {
    natsConnection_Destroy(conn);
    conn = NULL;
  }
}

natsStatus RspQueue::Enqueue(CThostFtdcRspInfoField* data,
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
    LOG_CODE(ERROR_ENCODE_RSP_ERROR_MSG, "Serialize RspErrorMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_ERROR, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspErrorMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcInputOrderField* data,
                             CThostFtdcRspInfoField* error) {
  return Enqueue(data, error, 0, true);
}

natsStatus RspQueue::Enqueue(CThostFtdcOrderActionField* data,
                             CThostFtdcRspInfoField* error) {
  CThostFtdcInputOrderActionField to = {0};
  convert(*data, to);
  return Enqueue(&to, error, 0, true);
}

natsStatus RspQueue::Enqueue(CThostFtdcInputOrderActionField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  req::InputOrderActionField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspOrderActionMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_order_action(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(SUBJECT_RSP_ORDER_ACTION, "Serialize RspOrderActionMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_ORDER_ACTION, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspOrderActionMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcInputOrderField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  req::InputOrderField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspOrderInsertMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_input_order(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_ORDER_INSERT_MSG, "Serialize RspOrderInsertMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_ORDER_INSERT, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspOrderInsertMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcInstrumentField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  rsp::InstrumentField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspInstrumentMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_instrument(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_INSTRUMENT_MSG, "Serialize RspInstrumentMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_QRY_INSTRUMENT,
                                  bytes.data(), bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspInstrumentMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcInstrumentCommissionRateField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  rsp::CommissionRateField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspCommissionRateMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_commission_rate(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_COMMISSTION_RATE_MSG,
             "Serialize RspCommissionRateMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_QRY_COMMISSION_RATE,
                                  bytes.data(), bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspCommissionRateMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcInstrumentMarginRateField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  rsp::MarginRateField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspMarginRateMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_margin_rate(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_MARGIN_RATE_MSG, "Serialize RspMarginRateMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_QRY_MARGIN_RATE,
                                  bytes.data(), bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspMarginRateMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcRspAuthenticateField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  rsp::AuthenticateField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspAuthenticateMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_authenticate(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_AUTHENTICATE_MSG,
             "Serialize RspAuthenticateMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_REQ_AUTHENTICATE,
                                  bytes.data(), bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspAuthenticateMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcSettlementInfoConfirmField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  req::SettlementConfirmField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspSettlementConfirmMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_confirm(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_SETTLEMENT_MSG,
             "Serialize RspSettlementConfirmMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_REQ_SETTLEMENT,
                                  bytes.data(), bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspSettlementConfirmMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcRspUserLoginField* data,
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
    LOG_CODE(ERROR_ENCODE_RSP_LOGIN_MSG, "Serialize RspUserLoginMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_REQ_LOGIN, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspUserLoginMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcUserLogoutField* data,
                             CThostFtdcRspInfoField* error,
                             int requestId,
                             bool isLast) {
  rsp::ErrorField e;
  req::UserLogoutField field;

  convert(*data, field);
  convert(*error, e);

  msg::rsp::RspUserLogoutMsg m;
  m.set_request_id(requestId);
  m.set_is_last(isLast);
  m.set_allocated_error(&e);
  m.set_allocated_logout(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RSP_LOGOUT_MSG, "Serialize RspUserLogoutMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RSP_REQ_LOGOUT, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RspUserLogoutMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcOrderField* data) {
  rsp::ErrorField e;
  rtn::OrderField field;

  convert(*data, field);

  e.set_error_id(0);
  e.set_error_msg("");

  msg::rtn::RtnOrderMsg m;
  m.set_allocated_order(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RTN_ORDER_MSG, "Serialize RtnOrderMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RTN_ORDER, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RtnOrderMsg.");
  }
  return s;
}

natsStatus RspQueue::Enqueue(CThostFtdcTradeField* data) {
  rsp::ErrorField e;
  rtn::TradeField field;

  convert(*data, field);

  e.set_error_id(0);
  e.set_error_msg("");

  msg::rtn::RtnTradeMsg m;
  m.set_allocated_trade(&field);

  auto&& bytes = m.SerializeAsString();
  if (bytes.length() < 1) {
    LOG_CODE(ERROR_ENCODE_RTN_TRADE_MSG, "Serialize RtnTradeMsg.");
    return natsStatus::NATS_ERR;
  }
  auto s = natsConnection_Publish(conn, SUBJECT_RTN_TRADE, bytes.data(),
                                  bytes.length());
  if (s != NATS_OK) {
    LOG_CODE(s, "Send RtnTradeMsg.");
  }
  return s;
}

bool RspQueue::IsConnected() {
  return conn != NULL;
}
