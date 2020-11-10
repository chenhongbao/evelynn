#include "Global.h"
#include "Config.h"
#include "Logger.h"

#include <filesystem>
#include <fstream>

void ReadLines(std::ifstream& in, std::set<std::string>& s) {
  if (in.is_open()) {
    std::string line;
    while (in.good()) {
      try {
        std::getline(in, line);
        if (line.size() > 0) {
          s.insert(line);
        }
      } catch (std::ios_base::failure& e) {
        WriteCode(ERROR_READ_CONFIG, __LINE__, __FILE__, __FUNCTION__,
                  e.what());
      }
    }
  }
}

Config::Config(const char* configPath)
    : FlowPath(".trader_flow"), MaxOrderPerSecond(6), MaxQueryPerSecond(1) {
  if (!std::filesystem::create_directory(FlowPath)) {
    FlowPath = "";
  }
  {
    std::ifstream in(configPath, std::ios::in);
    ReadLines(in, Fronts);
  }
}

Config::~Config() {}
