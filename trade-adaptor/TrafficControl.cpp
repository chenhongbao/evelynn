#include "Global.h"
#include "TrafficControl.h"

#include <chrono>
#include <thread>

using namespace std::chrono;

long long inline MilliSinceEpoch() {
  return duration_cast<milliseconds>(system_clock::now().time_since_epoch())
      .count();
}

TrafficControl::TrafficControl(int max)
    : msSinceEpoch(0), sentCount(0), maxCount(max) {}

TrafficControl::~TrafficControl() {}

void TrafficControl::ControlTraffic() {
  auto now = MilliSinceEpoch();
  if (sentCount < maxCount) {
    ++sentCount;
    if (msSinceEpoch == 0) {
      msSinceEpoch = MilliSinceEpoch();
    }
    return;
  }
  auto x = now - msSinceEpoch;
  if (x < 1000) {
    /*
     * The sleep ms should be (1000 - x), but the packets received by remote
     * peer have various lags and some of the last packets may be placed in
     * next second. Then more following packets could cause remote traffic ctrl.
     *
     * So here it adds a margin, saying (2000 - x).
     */
    std::this_thread::sleep_for(std::chrono::milliseconds(2000 - x));
  }
  sentCount = 1;
  msSinceEpoch = MilliSinceEpoch();
}
