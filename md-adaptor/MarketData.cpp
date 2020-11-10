#include "MdGlobal.h"
#include "MarketData.h"
#include "MdHandlers.h"
#include "MarketDataSpi.h"
#include "MdConfig.h"
#include "../common/Names.h"

#define OK_OR_RETURN(FUNCTION_CALL) \
  {                                 \
    auto s = FUNCTION_CALL;         \
    if (s != NATS_OK) {             \
      return s;                     \
    }                               \
  }

#define CONNECT(CONN, URL) OK_OR_RETURN(natsConnection_ConnectTo(CONN, URL))

#define SUBSCRIBE(SUB, CONN, SUBJECT, HANDLER, CLOSURE) \
  OK_OR_RETURN(natsConnection_Subscribe(SUB, CONN, SUBJECT, HANDLER, CLOSURE))

int InitializeTrader(CThostFtdcMdApi& api,
                     CThostFtdcMdSpi* spi,
                     MdConfig& config) {
  if (config.Fronts.size() < 1) {
    return ERROR_NO_FRONT_ADDR;
  }
  char addr[128] = {0};
  for (auto front : config.Fronts) {
    ::strncpy_s(addr, front.c_str(), sizeof(addr) - 1);
    api.RegisterFront(addr);
  }
  api.RegisterSpi(spi);
  api.Init();
  return 0;
}

void ClearQueue(natsConnection* c, natsSubscription* subs[], int count) {
  for (int i = 0; i < count; ++i) {
    natsSubscription_Destroy(subs[i]);
  }
  natsConnection_Destroy(c);
}

MarketData::MarketData() {}

MarketData::~MarketData() {}

int MarketData::Run(const char* configPath) {
  MdConfig config(configPath);
  RspMarketData rsp;

  if (!rsp.IsConnected()) {
    return ERROR_INIT_NATS;
  }

  auto api = CThostFtdcMdApi::CreateFtdcMdApi(config.FlowPath.c_str());

  ReqMarketData req(*api);
  MarketDataSpi spi(rsp, req);

  OK_OR_RETURN(InitializeTrader(*api, &spi, config));

  constexpr auto subsCount = 3;
  natsConnection* connection = NULL;
  natsSubscription* subscriptions[subsCount];
  MdPack pack = {req, rsp};

  CONNECT(&connection, NATS_DEFAULT_URL);
  SUBSCRIBE(&subscriptions[0], connection, SUBJECT_REQ_LOGIN_2,
            OnReqLogin2, &pack);
  SUBSCRIBE(&subscriptions[1], connection, SUBJECT_SUB_MD,
            OnSubMarketData, &pack);
  SUBSCRIBE(&subscriptions[2], connection, SUBJECT_REQ_EXIT_2, OnReqExit2,
            &pack);

  programExit = false;

  WaitExit();
  ClearQueue(connection, subscriptions, subsCount);
  return 0;
}
