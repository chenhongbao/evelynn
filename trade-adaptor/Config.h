#pragma once

#include <set>
#include <string>

struct Config {
  int MaxOrderPerSecond;
  int MaxQueryPerSecond;
  std::string FlowPath;
  std::set<std::string> Fronts;

  Config(const char* configPath = "");
  virtual ~Config();
};

#define ERROR_READ_CONFIG 0x10000001
