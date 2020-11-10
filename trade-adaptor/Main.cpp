#include "Global.h"
#include <exception>
#include "Trader.h"
#include "Logger.h"

#define LOG_CODE(CODE, MSG) WriteCode(CODE, __LINE__, __FILE__, __func__, MSG)

int main() {
  try {
    Trader trader;
    return trader.Run();
  } catch (std::exception& e) {
    LOG_CODE(-1, e.what());
  }
}
