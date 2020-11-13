#pragma once

#include "ThostFtdcMdApi.h"

class ReqMarketData {
 public:
  ReqMarketData(CThostFtdcMdApi&);
  virtual ~ReqMarketData();

  int Enqueue(CThostFtdcReqUserLoginField*, int);
  int Enqueue(char*[], int);
  const char* GetTradingDay();

 private:
  CThostFtdcMdApi& api;
};

