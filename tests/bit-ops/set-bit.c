// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(SET_BIT(0, 0) == 1);
    assert(SET_BIT(0, 1) == 2);
    assert(SET_BIT(0, 2) == 4);
    assert(SET_BIT(0, 3) == 8);
    assert(SET_BIT(0, 4) == 16);
    assert(SET_BIT(123456789, 9) == 123457301);
    assert(SET_BIT(123456789, 10) == 123456789);
    assert(SET_BIT(123456789, 12) == 123460885);
    return 0;
}
