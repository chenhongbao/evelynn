#include "MdGlobal.h"
#include "MarketDataSpi.h"
#include "Logger.h"

#include <chrono>
#include <ctime>

using namespace std::chrono;

#define LOG_CODE(CODE) WriteCode(CODE, __LINE__, __FILE__, __func__)

#define RETURN_IF_NULL(PTR)             \
  {                                     \
    if (PTR == NULL) {                  \
      LOG_CODE(ERROR_RSP_ARGS_NULLPTR); \
      return;                           \
    }                                   \
  }

#define S0 (2 * 3600 + 1800)
#define S1 (9 * 3600)
#define S2 (15 * 3600 + 900)
#define S3 (21 * 3600)

inline long SecondOfDay() {
  tm t_struct;
  auto now = system_clock::to_time_t(system_clock::now());
  ::localtime_s(&t_struct, &now);
  return t_struct.tm_hour * 3600 + t_struct.tm_min * 60 + t_struct.tm_sec;
}

inline bool IsReconnect() {
  auto r = SecondOfDay();
  return (r < S0 || (S1 < r && r < S2) || S3 < r) &&
         subscribedInstruments.size() > 0;
}

void Subscribe(ReqMarketData& req) {
  auto count = subscribedInstruments.size();
  if (count < 1) {
    return;
  }
  char** pp = new char*[count];
  int i = 0;
  for (auto& instrument : subscribedInstruments) {
    pp[i] = new TThostFtdcInstrumentIDType{0};
    strncpy_s(pp[i], sizeof(TThostFtdcInstrumentIDType), instrument.c_str(),
              sizeof(TThostFtdcInstrumentIDType) - 1);
  }
  LOG_CODE(req.Enqueue(pp, count));
  /*
   * Clear up memory.
   */
  for (int i = 0; i < count; ++i) {
    delete[] pp[i];
  }
  delete[] pp;
}

inline void SetTradingDay(CThostFtdcDepthMarketDataField* data,
                          const char* src) {
  if (src != NULL) {
    strncpy_s(data->TradingDay, src, sizeof(TThostFtdcDateType));
  }
}

MarketDataSpi::MarketDataSpi(RspMarketData& r, ReqMarketData& q)
    : rsp(r), req(q), requestId(0) {}

MarketDataSpi::~MarketDataSpi() {}

void MarketDataSpi::OnFrontConnected() {
  if (!IsReconnect()) {
    LOG_CODE(req.Enqueue(&reqUserLoginField, ++requestId));
  }
}

void MarketDataSpi::OnFrontDisconnected(int nReason) {
  LOG_CODE(nReason);
}

void MarketDataSpi::OnRspUserLogin(CThostFtdcRspUserLoginField* data,
                                   CThostFtdcRspInfoField* error,
                                   int requestId,
                                   bool isLast) {
  RETURN_IF_NULL(data);
  RETURN_IF_NULL(error);
  if (IsReconnect()) {
    Subscribe(req);
  } else {
    LOG_CODE(rsp.Enqueue(data, error, requestId, isLast));
  }
}

void MarketDataSpi::OnRspError(CThostFtdcRspInfoField* data,
                               int requestId,
                               bool isLast) {
  RETURN_IF_NULL(data);
  LOG_CODE(rsp.Enqueue(data, requestId, isLast));
}

void MarketDataSpi::OnRspSubMarketData(CThostFtdcSpecificInstrumentField* data,
                                       CThostFtdcRspInfoField* error,
                                       int requestId,
                                       bool isLast) {
  RETURN_IF_NULL(data);
  if (!IsReconnect()) {
    LOG_CODE(rsp.Enqueue(data, error, requestId, isLast));
  }
}

void MarketDataSpi::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* data) {
  RETURN_IF_NULL(data);
  /*
   * Set all trading days to trading-day.
   * The trading day in CZCE's market data is action day, so need to align them.
   */
  SetTradingDay(data, req.GetTradingDay());
  LOG_CODE(rsp.Enqueue(data));
}
