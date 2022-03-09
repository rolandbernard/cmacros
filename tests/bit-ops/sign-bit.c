// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(SIGN_BIT(0) == 0);
    assert(SIGN_BIT(1) == 0);
    assert(SIGN_BIT(100) == 0);
    assert(SIGN_BIT(-1) == 1);
    assert(SIGN_BIT(-100) == 1);
    return 0;
}
