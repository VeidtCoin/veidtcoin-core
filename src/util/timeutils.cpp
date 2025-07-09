#include "timeutils.h"
#include <ctime>
#include <sstream>

namespace TimeUtils {

std::string currentTimestamp() {
    std::time_t now = std::time(nullptr);
    std::tm* local = std::localtime(&now);
    std::stringstream ss;
    ss << (1900 + local->tm_year) << "-"
       << (1 + local->tm_mon) << "-"
       << local->tm_mday << " "
       << local->tm_hour << ":"
       << local->tm_min << ":"
       << local->tm_sec;
    return ss.str();
}

}
