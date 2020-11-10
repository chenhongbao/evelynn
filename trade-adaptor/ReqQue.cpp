#include "Global.h"
#include "ReqQue.h"
#include "Logger.h"

ReqQueue::ReqQueue(CThostFtdcTraderApi& a, int max)
    : api(a), TrafficControl(max) {}

ReqQueue::~ReqQueue() {}

int ReqQueue::Enqueue(CThostFtdcReqAuthenticateField* data, int requestId) {
  ControlTraffic();
  return api.ReqAuthenticate(data, requestId);
}

int ReqQueue::Enqueue(CThostFtdcReqUserLoginField* data, int requestId) {
  ControlTraffic();
  return api.ReqUserLogin(data, requestId);
}

int ReqQueue::Enqueue(CThostFtdcSettlementInfoConfirmField* data,
                      int requestId) {
  ControlTraffic();
  return api.ReqSettlementInfoConfirm(data, requestId);
}

int ReqQueue::Enqueue(CThostFtdcUserLogoutField* data, int requestId) {
  ControlTraffic();
  return api.ReqUserLogout(data, requestId);
}

int ReqQueue::Enqueue(CThostFtdcInputOrderActionField* data, int requestId) {
  ControlTraffic();
  return api.ReqOrderAction(data, requestId);
}

int ReqQueue::Enqueue(CThostFtdcInputOrderField* data, int requestId) {
  ControlTraffic();
  return api.ReqOrderInsert(data, requestId);
}
