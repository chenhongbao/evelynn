#include "MdGlobal.h"
#include "Logger.h"

#include <condition_variable>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <mutex>
#include <queue>
#include <sstream>
#include <thread>

bool logStop;

std::mutex mutex;
std::condition_variable condition;
std::queue<std::string> logQueue;

void Write(std::string msg, const char* file) {
  std::ofstream out(file, std::ios::out | std::ios::app);
  out.write(msg.c_str(), msg.length());
  out.write("\n", 1);
}

std::thread logDeamon([]() -> void {
  logStop = false;
  while (!logStop) {
    std::unique_lock<std::mutex> lock(mutex);
    condition.wait(lock);

    while (logQueue.size() > 0) {
      try {
        auto log = logQueue.front();
        Write(log, "default.log");
        logQueue.pop();
      } catch(std::exception& e) {
        printf_s("%s\n", e.what());
      }
    }
  }
});

using namespace std::chrono;

void WriteLog(long long code,
              int line,
              const char* src,
              const char* func,
              const char* msg = "NO MESSAGE") {
  tm t_struct;
  std::string m;
  std::stringstream ss;
  auto now = system_clock::to_time_t(system_clock::now());
  ::localtime_s(&t_struct, &now);
  ss << std::put_time(&t_struct, "%F %T ") << src << ":" << line << " "
     << func << " " << msg << "(" << std::hex << std::uppercase << code << ")";
  ss.str(m);
  {
    std::unique_lock<std::mutex> lock(mutex);
    logQueue.push(m);
  }
  condition.notify_one();
}

void StopLog() {
  if (logStop) {
    return;
  }
  logStop = true;
  condition.notify_one();
  if (logDeamon.joinable()) {
    logDeamon.join();
  }
}
