#include <cassert>
#include <vector>

#include "fibonacci.hpp"

std::vector<int> fibonacci(int n) {
    assert(n > 1);

    auto xs = std::vector<int>(n);
    xs[0] = 1;
    xs[1] = 1;
    for (int i = 2; i < n; ++i) {
        xs[i] = xs[i - 1] + xs[i - 2];
    }

    return xs;
}
