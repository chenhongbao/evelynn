#include "MdGlobal.h"
#include <exception>
#include "MarketData.h"
#include "Logger.h"

#define LOG_CODE(CODE, MSG) WriteCode(CODE, __LINE__, __FILE__, __func__, MSG)

int main()
{
  try {
    MarketData md;
    return md.Run();
  } catch (std::exception& e) {
    LOG_CODE(-1, e.what());
  }
}
