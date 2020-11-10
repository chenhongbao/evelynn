#pragma once

class TrafficControl {
 public:
  TrafficControl(int);
  virtual ~TrafficControl();

 protected:
  void ControlTraffic();

 private:
  long long msSinceEpoch;
  short sentCount;
  const short maxCount;
};
