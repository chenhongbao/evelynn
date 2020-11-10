#pragma once

#include "ThostFtdcMdApi.h"

class ReqMarketData {
 public:
  ReqMarketData(CThostFtdcMdApi&);
  virtual ~ReqMarketData();

  int Enqueue(CThostFtdcReqUserLoginField*, int);
  int Enqueue(char*[], int);

 private:
  CThostFtdcMdApi& api;
};

