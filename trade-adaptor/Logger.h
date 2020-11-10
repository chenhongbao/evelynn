#pragma once

extern void WriteLog(long long, int, const char*, const char*, const char*);
extern void StopLog();

template <typename Ty>
void WriteCode(Ty code,
              int line,
              const char* src,
              const char* func,
              const char* msg = "",
              bool includeZero = false) {
  if (includeZero) {
    WriteLog((long long)code, line, src, func, msg);
  } else if (code != 0) {
    WriteLog((long long)code, line, src, func, msg);
  }
}
