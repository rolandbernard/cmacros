// test: Compute the maximum

#include <assert.h>

#include "min-max.h"

int main() {
    assert(MAX(1.5, 0) == 1.5);
    assert(MAX(0.1, -15) == 0.1);
    assert(MAX(1.5, 0.2) == 1.5);
    assert(MAX(2.3, 1.5) == 2.3);
    assert(MAX(-1.5, -4) == -1.5);
    assert(MAX(-9, 1234.56789) == 1234.56789);
    assert(MAX(1.1, -1.23456789) == 1.1);
    assert(MAX(123456.789, 11) == 123456.789);
    return 0;
}
