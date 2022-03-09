// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(SIGN_MASK(0) == 0);
    assert(SIGN_MASK(1) == 0);
    assert(SIGN_MASK(100) == 0);
    assert(SIGN_MASK(-1) == ~0);
    assert(SIGN_MASK(-100) == ~0);
    return 0;
}
