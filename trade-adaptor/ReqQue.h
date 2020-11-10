#pragma once

#include "RspQue.h"
#include "ThostFtdcTraderApi.h"
#include "TrafficControl.h"

class ReqQueue : public TrafficControl {
 public:
  ReqQueue(CThostFtdcTraderApi&, int);
  virtual ~ReqQueue();

  int Enqueue(CThostFtdcReqAuthenticateField*, int);
  int Enqueue(CThostFtdcReqUserLoginField*, int);
  int Enqueue(CThostFtdcSettlementInfoConfirmField*, int);
  int Enqueue(CThostFtdcUserLogoutField*, int);
  int Enqueue(CThostFtdcInputOrderActionField*, int);
  int Enqueue(CThostFtdcInputOrderField*, int);

 private:
  CThostFtdcTraderApi& api;
};
