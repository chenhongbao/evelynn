#pragma once

#include <nats/nats.h>

extern void OnReqLogin2(natsConnection*, natsSubscription*, natsMsg*, void*);

extern void OnSubMarketData(natsConnection*,
                            natsSubscription*,
                            natsMsg*,
                            void*);

extern void OnReqExit2(natsConnection*, natsSubscription*, natsMsg*, void*);

extern void WaitExit();

extern void SignalExit();

#define ERROR_PARSE_REQ_USER_LOGIN_2_MSG 0x90000001
#define ERROR_EMPTY_SUBSCRIPTION 0x90000002

#include "ReqMd.h"
#include "RspMd.h"

struct MdPack {
  ReqMarketData& req;
  RspMarketData& rsp;
};
