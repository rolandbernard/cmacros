// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(ABS(0) == 0);
    assert(ABS(1) == 1);
    assert(ABS(100) == 100);
    assert(ABS(-1) == 1);
    assert(ABS(-100) == 100);
    return 0;
}
