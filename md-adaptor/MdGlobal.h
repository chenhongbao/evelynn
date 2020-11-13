#pragma once

#pragma comment(lib, "nats.lib")
#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "thostmduserapi_se.lib")

/*
 * GLobal exit mark. Set true then the program will exit.
 */
extern bool programExit;

#include "ThostFtdcUserApiStruct.h"
/*
 * User information for relogin.
 */
extern CThostFtdcReqUserLoginField reqUserLoginField;

#include <set>
#include <string>
extern std::set<std::string> subscribedInstruments;

#define FILL_CODE_MSG(CODE, MSG)                          \
  {                                                       \
    switch (code) {                                       \
      case -1:                                            \
        strcpy_s(m.ErrorMsg, "��������ʧ��");             \
        break;                                            \
      case -2:                                            \
        strcpy_s(m.ErrorMsg, "δ�������󳬹������");     \
        break;                                            \
      case -3:                                            \
        strcpy_s(m.ErrorMsg, "ÿ�뷢�����������������"); \
        break;                                            \
    }                                                     \
  }
