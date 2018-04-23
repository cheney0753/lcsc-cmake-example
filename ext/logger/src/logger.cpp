#include <iostream>

#include "logger/logger.hpp"

namespace logger {

void log(const std::vector<int>& xs) {
    auto separator = std::string("");
    std::cout << "[";
    for (auto x : xs) {
        std::cout << separator << x;
        separator = ", ";
    }
    std::cout << "]\n";
}

} // namespace logger
