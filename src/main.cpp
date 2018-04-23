#include "logger/logger.hpp"
#include "fibonacci.hpp"

int main() {
    auto fs = fibonacci(10);
    logger::log(fs);
    return 0;
}
