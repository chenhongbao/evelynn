#pragma once
#include <thread>
#include <condition_variable>
#include "ReqQue.h"

enum class ReconnectStatus : char {
  DISCONNECTED, AUTHENTICATED, LOGIN, SETTLEMENT_CONFIRMED, UNKNOWN
};

class Reconnecter {
 public:
  Reconnecter(ReqQueue& q);
  virtual ~Reconnecter();

  void OnRspAuthenticate(CThostFtdcRspAuthenticateField*,
                         CThostFtdcRspInfoField*,
                         int,
                         bool);
  void OnRspUserLogin(CThostFtdcRspUserLoginField*,
                      CThostFtdcRspInfoField*,
                      int,
                      bool);
  void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField*,
                                  CThostFtdcRspInfoField*,
                                  int,
                                  bool);
  void reconnect();

 private:
  std::mutex mtx;
  std::condition_variable condition;
  std::thread daemon;
  ReconnectStatus status;
  bool exit;
  int requestId;
  ReqQueue& req;
};

#define ERROR_RECONNECT_ANY 0x60000001
