// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(CLEAR_BIT(15, 0) == 14);
    assert(CLEAR_BIT(15, 1) == 13);
    assert(CLEAR_BIT(15, 2) == 11);
    assert(CLEAR_BIT(15, 3) == 7);
    assert(CLEAR_BIT(15, 4) == 15);
    assert(CLEAR_BIT(123456789, 9) == 123456789);
    assert(CLEAR_BIT(123456789, 10) == 123455765);
    assert(CLEAR_BIT(123456789, 11) == 123454741);
    return 0;
}
