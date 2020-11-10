#include "Global.h"
#include "QryQue.h"
#include "Logger.h"

QryQueue::QryQueue(CThostFtdcTraderApi& a, int max)
    : api(a), TrafficControl(max) {}

QryQueue::~QryQueue() {}

int QryQueue::Enqueue(CThostFtdcQryInstrumentField* data, int requestId) {
  ControlTraffic();
  return api.ReqQryInstrument(data, requestId);
}

int QryQueue::Enqueue(CThostFtdcQryInstrumentMarginRateField* data,
                      int requestId) {
  ControlTraffic();
  return api.ReqQryInstrumentMarginRate(data, requestId);
}

int QryQueue::Enqueue(CThostFtdcQryInstrumentCommissionRateField* data,
                      int requestId) {
  ControlTraffic();
  return api.ReqQryInstrumentCommissionRate(data, requestId);
}
