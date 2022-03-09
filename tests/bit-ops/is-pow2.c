// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(IS_POW2(0));
    assert(IS_POW2(1));
    assert(IS_POW2(2));
    assert(IS_POW2(4));
    assert(IS_POW2(8));
    assert(IS_POW2(256));
    assert(IS_POW2(512));
    assert(IS_POW2(1024));
    assert(!IS_POW2(100));
    assert(!IS_POW2(200));
    assert(!IS_POW2(300));
    assert(!IS_POW2(400));
    return 0;
}
