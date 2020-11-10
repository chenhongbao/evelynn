#pragma once

#include "RspQue.h"
#include "ThostFtdcTraderApi.h"
#include "TrafficControl.h"

class QryQueue : public TrafficControl {
 public:
  QryQueue(CThostFtdcTraderApi&, int);
  virtual ~QryQueue();

  int Enqueue(CThostFtdcQryInstrumentField*, int);
  int Enqueue(CThostFtdcQryInstrumentMarginRateField*, int);
  int Enqueue(CThostFtdcQryInstrumentCommissionRateField*, int);

 private:
  CThostFtdcTraderApi& api;
};
