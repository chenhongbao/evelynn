#pragma once

#include "ThostFtdcUserApiStruct.h"
#include <nats/nats.h>

class RspQueue {
 public:
  RspQueue();
  virtual ~RspQueue();

  natsStatus Enqueue(CThostFtdcRspInfoField*, int, bool);
  natsStatus Enqueue(CThostFtdcInputOrderField*, CThostFtdcRspInfoField*);
  natsStatus Enqueue(CThostFtdcOrderActionField*, CThostFtdcRspInfoField*);
  natsStatus Enqueue(CThostFtdcInputOrderActionField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcInputOrderField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcInstrumentField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcInstrumentCommissionRateField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcInstrumentMarginRateField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcRspAuthenticateField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcSettlementInfoConfirmField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcRspUserLoginField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcUserLogoutField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcOrderField*);
  natsStatus Enqueue(CThostFtdcTradeField*);

  bool IsConnected();

 private:
  natsConnection* conn;
};

#define ERROR_ENCODE_RSP_ERROR_MSG 0x40000001
#define ERROR_ENCODE_RSP_ORDER_INSERT_MSG 0x40000002
#define ERROR_ENCODE_RSP_ORDER_ACTION_MSG 0x40000003
#define ERROR_ENCODE_RSP_INSTRUMENT_MSG 0x40000004
#define ERROR_ENCODE_RSP_COMMISSTION_RATE_MSG 0x40000005
#define ERROR_ENCODE_RSP_MARGIN_RATE_MSG 0x40000006
#define ERROR_ENCODE_RSP_AUTHENTICATE_MSG 0x40000007
#define ERROR_ENCODE_RSP_SETTLEMENT_MSG 0x40000008
#define ERROR_ENCODE_RSP_LOGIN_MSG 0x40000009
#define ERROR_ENCODE_RSP_LOGOUT_MSG 0x4000000a
#define ERROR_ENCODE_RTN_ORDER_MSG 0x4000000b
#define ERROR_ENCODE_RTN_TRADE_MSG 0x4000000c
