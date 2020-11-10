#include "Global.h"
#include "Trader.h"
#include "Config.h"
#include "Handlers.h"
#include "QryQue.h"
#include "Reconnecter.h"
#include "ReqQue.h"
#include "RspQue.h"
#include "TraderSpi.h"

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

int InitializeTrader(CThostFtdcTraderApi& api,
                     CThostFtdcTraderSpi* spi,
                     Config& config) {
  if (config.Fronts.size() < 1) {
    return ERROR_NO_FRONT_ADDR;
  }
  char addr[128] = {0};
  for (auto front : config.Fronts) {
    ::strncpy_s(addr, front.c_str(), sizeof(addr) - 1);
    api.RegisterFront(addr);
  }
  api.SubscribePublicTopic(THOST_TERT_RESTART);
  api.SubscribePrivateTopic(THOST_TERT_RESTART);
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

Trader::Trader() {}

Trader::~Trader() {}

int Trader::Run(const char* configPath) {
  Config config(configPath);
  RspQueue rspQueue;

  if (!rspQueue.IsConnected()) {
    return ERROR_INIT_NATS;
  }

  auto api = CThostFtdcTraderApi::CreateFtdcTraderApi(config.FlowPath.c_str());

  ReqQueue reqQueue(*api, config.MaxOrderPerSecond);
  QryQueue qryQueue(*api, config.MaxQueryPerSecond);
  Reconnecter reconn(reqQueue);
  TraderSpi spi(rspQueue, reconn);

  OK_OR_RETURN(InitializeTrader(*api, &spi, config));

  constexpr auto subsCount = 10;
  natsConnection* connection = NULL;
  natsSubscription* subscriptions[subsCount];
  QueuePack pack = {reqQueue, qryQueue, rspQueue};

  CONNECT(&connection, NATS_DEFAULT_URL);
  SUBSCRIBE(&subscriptions[0], connection, SUBJECT_REQ_AUTHENTICATE,
            OnReqAuthenticate, &pack);
  SUBSCRIBE(&subscriptions[1], connection, SUBJECT_REQ_SETTLEMENT_CONFIRM,
            OnReqSettlementConfirm, &pack);
  SUBSCRIBE(&subscriptions[2], connection, SUBJECT_REQ_LOGIN, OnReqLogin,
            &pack);
  SUBSCRIBE(&subscriptions[3], connection, SUBJECT_REQ_LOGOUT, OnReqLogout,
            &pack);
  SUBSCRIBE(&subscriptions[4], connection, SUBJECT_REQ_ORDER_INSERT,
            OnReqOrderInsert, &pack);
  SUBSCRIBE(&subscriptions[5], connection, SUBJECT_REQ_ORDER_ACTION,
            OnReqOrderAction, &pack);
  SUBSCRIBE(&subscriptions[6], connection, SUBJECT_REQ_EXIT, OnReqExit, &pack);
  SUBSCRIBE(&subscriptions[7], connection, SUBJECT_QRY_INSTRUMENT,
            OnQryInstrument, &pack);
  SUBSCRIBE(&subscriptions[8], connection, SUBJECT_QRY_COMMISSION,
            OnQryCommission, &pack);
  SUBSCRIBE(&subscriptions[9], connection, SUBJECT_QRY_MARGIN, OnQryMargin,
            &pack);

  programExit = false;

  WaitExit();
  ClearQueue(connection, subscriptions, subsCount);
  return 0;
}
