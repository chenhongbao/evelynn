#pragma once

#include <set>
#include <string>

struct MdConfig {
  std::string FlowPath;
  std::set<std::string> Fronts;

  MdConfig(const char* configPath = "");
  virtual ~MdConfig();
};

#define ERROR_READ_CONFIG 0x10000001
