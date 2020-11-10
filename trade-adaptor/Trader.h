#pragma once

class Trader {
 public:
  Trader();
  virtual ~Trader();

  int Run(const char* configPath = "fronts");
};

#define ERROR_NO_FRONT_ADDR 0x20000001
#define ERROR_INIT_NATS 0x20000002
