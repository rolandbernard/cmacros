// test: Compute the minimum

#include <assert.h>

#include "min-max.h"

int main() {
    assert(MIN(15, 0) == 0);
    assert(MIN(1, -15) == -15);
    assert(MIN(15, 2) == 2);
    assert(MIN(2, 15) == 2);
    assert(MIN(15, 4) == 4);
    assert(MIN(-9, 123456789) == -9);
    assert(MIN(11, -123456789) == -123456789);
    assert(MIN(123456789, 11) == 11);
    return 0;
}
