// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(GET_BIT(2, 1) == 1);
    assert(GET_BIT(2, 0) == 0);
    assert(GET_BIT(123456789, 9) == 0);
    assert(GET_BIT(123456789, 10) == 1);
    assert(GET_BIT(123456789, 11) == 1);
    return 0;
}
