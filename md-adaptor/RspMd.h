#pragma once

#include "ThostFtdcUserApiStruct.h"
#include "nats/nats.h"

class RspMarketData {
 public:
  RspMarketData();
  virtual ~RspMarketData();

  natsStatus Enqueue(CThostFtdcRspUserLoginField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcSpecificInstrumentField*,
                     CThostFtdcRspInfoField*,
                     int,
                     bool);
  natsStatus Enqueue(CThostFtdcRspInfoField*, int, bool);
  natsStatus Enqueue(CThostFtdcDepthMarketDataField*);

  bool IsConnected();

 private:
  natsConnection* conn;
};

#define ERROR_ENCODE_RSP_ERROR_2_MSG 0x40000001
#define ERROR_ENCODE_RSP_LOGIN_2_MSG 0x80000002
#define ERROR_ENCODE_RSP_SUB_MD_MSG 0x80000003
#define ERROR_ENCODE_RTN_MD_MSG 0x80000004
