// test: Compute the minimum

#include <assert.h>

#include "min-max.h"

int main() {
    assert(MIN(1.5, 0) == 0);
    assert(MIN(1, -1.5) == -1.5);
    assert(MIN(1.5, 2.4) == 1.5);
    assert(MIN(2, 1.5) == 1.5);
    assert(MIN(1.5, 0.4) == 0.4);
    assert(MIN(-0.9, 1234.56789) == -0.9);
    assert(MIN(1.1, -1.23456789) == -1.23456789);
    assert(MIN(123456.789, 1.1) == 1.1);
    return 0;
}
