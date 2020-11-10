#pragma once

#include "Reconnecter.h"
#include "RspQue.h"
#include "ThostFtdcTraderApi.h"

class TraderSpi : public CThostFtdcTraderSpi {
 public:
  TraderSpi(RspQueue& rspQueue, Reconnecter& reconn);
  virtual ~TraderSpi();

  virtual void OnFrontConnected();
  virtual void OnFrontDisconnected(int);
  virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField*,
                                 CThostFtdcRspInfoField*,
                                 int,
                                 bool);
  virtual void OnRspUserLogin(CThostFtdcRspUserLoginField*,
                              CThostFtdcRspInfoField*,
                              int,
                              bool);
  virtual void OnRspUserLogout(CThostFtdcUserLogoutField*,
                               CThostFtdcRspInfoField*,
                               int,
                               bool);
  virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField*,
                                   CThostFtdcRspInfoField*);
  virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField*,
                                   CThostFtdcRspInfoField*);
  virtual void OnRspOrderInsert(CThostFtdcInputOrderField*,
                                CThostFtdcRspInfoField*,
                                int,
                                bool);
  virtual void OnRspOrderAction(CThostFtdcInputOrderActionField*,
                                CThostFtdcRspInfoField*,
                                int,
                                bool);
  virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField*,
                                          CThostFtdcRspInfoField*,
                                          int,
                                          bool);
  virtual void OnRspQryInstrument(CThostFtdcInstrumentField*,
                                  CThostFtdcRspInfoField*,
                                  int,
                                  bool);
  virtual void OnRspQryInstrumentCommissionRate(
      CThostFtdcInstrumentCommissionRateField*,
      CThostFtdcRspInfoField*,
      int,
      bool);
  virtual void OnRspQryInstrumentMarginRate(
      CThostFtdcInstrumentMarginRateField*,
      CThostFtdcRspInfoField*,
      int,
      bool);
  virtual void OnRtnOrder(CThostFtdcOrderField*);
  virtual void OnRtnTrade(CThostFtdcTradeField*);
  virtual void OnRspError(CThostFtdcRspInfoField*, int, bool);

 private:
  RspQueue& rsp;
  Reconnecter& reConn;
  bool autoReconnect;
};

#define ERROR_RSP_ARGS_NULLPTR 0x50000001
