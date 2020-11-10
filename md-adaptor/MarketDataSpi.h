#pragma once

#include "ReqMd.h"
#include "RspMd.h"
#include "ThostFtdcMdApi.h"

class MarketDataSpi : public CThostFtdcMdSpi {
 public:
  MarketDataSpi(RspMarketData&, ReqMarketData&);
  virtual ~MarketDataSpi();
  virtual void OnFrontConnected();
  virtual void OnFrontDisconnected(int);
  virtual void OnRspUserLogin(CThostFtdcRspUserLoginField*,
                              CThostFtdcRspInfoField*,
                              int,
                              bool);
  virtual void OnRspError(CThostFtdcRspInfoField*, int, bool);
  virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField*,
                                  CThostFtdcRspInfoField*,
                                  int,
                                  bool);
  virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField*);

 private:
  RspMarketData& rsp;
  ReqMarketData& req;
  int requestId;
};

#define ERROR_RSP_ARGS_NULLPTR 0xa0000001
