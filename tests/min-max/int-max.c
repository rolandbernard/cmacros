// test: Compute the maximum

#include <assert.h>

#include "min-max.h"

int main() {
    assert(MAX(15, 0) == 15);
    assert(MAX(1, -15) == 1);
    assert(MAX(15, 2) == 15);
    assert(MAX(2, 15) == 15);
    assert(MAX(-15, -4) == -4);
    assert(MAX(-9, 123456789) == 123456789);
    assert(MAX(11, -123456789) == 11);
    assert(MAX(123456789, 11) == 123456789);
    return 0;
}
