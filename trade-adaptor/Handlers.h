#pragma once

#include <nats/nats.h>

extern void OnReqAuthenticate(natsConnection*,
                              natsSubscription*,
                              natsMsg*,
                              void*);

extern void OnReqLogin(natsConnection*, natsSubscription*, natsMsg*, void*);

extern void OnReqSettlementConfirm(natsConnection*,
                                   natsSubscription*,
                                   natsMsg*,
                                   void*);

extern void OnReqLogout(natsConnection*, natsSubscription*, natsMsg*, void*);

extern void OnReqOrderInsert(natsConnection*,
                             natsSubscription*,
                             natsMsg*,
                             void*);

extern void OnReqOrderAction(natsConnection*,
                             natsSubscription*,
                             natsMsg*,
                             void*);

extern void OnReqExit(natsConnection*, natsSubscription*, natsMsg*, void*);

extern void OnQryInstrument(natsConnection*,
                            natsSubscription*,
                            natsMsg*,
                            void*);

extern void OnQryCommission(natsConnection*,
                            natsSubscription*,
                            natsMsg*,
                            void*);

extern void OnQryMargin(natsConnection*, natsSubscription*, natsMsg*, void*);

extern void WaitExit();

extern void SignalExit();

#define ERROR_PARSE_REQ_AUTHENTICATE_MSG 0x30000001
#define ERROR_PARSE_REQ_USER_LOGIN_MSG 0x30000002
#define ERROR_PARSE_REQ_SETTLEMENT_MSG 0x30000003
#define ERROR_PARSE_REQ_USER_LOGOUT_MSG 0x30000004
#define ERROR_PARSE_REQ_ORDER_INSERT_MSG 0x30000005
#define ERROR_PARSE_REQ_ORDER_ACTION_MSG 0x30000006
#define ERROR_PARSE_QRY_INSTRUMENT_MSG 0x30000007
#define ERROR_PARSE_QRY_COMMISSION_MSG 0x30000008
#define ERROR_PARSE_QRY_MARGIN_MSG 0x30000009

#include "ReqQue.h"
#include "QryQue.h"
#include "RspQue.h"

struct QueuePack {
  ReqQueue& req;
  QryQueue& qry;
  RspQueue& rsp;
};
