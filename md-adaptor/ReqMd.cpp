#include "MdGlobal.h"
#include "ReqMd.h"

ReqMarketData::ReqMarketData(CThostFtdcMdApi& a) : api(a) {}

ReqMarketData::~ReqMarketData() {}

int ReqMarketData::Enqueue(CThostFtdcReqUserLoginField* data, int requestId) {
  return api.ReqUserLogin(data, requestId);
}

int ReqMarketData::Enqueue(char* pp[], int count) {
  return api.SubscribeMarketData(pp, count);
}
