// test: Computes the left rotation of the integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert((uint16_t)ROTL((uint16_t)2, 10) == 2048);
    assert((uint32_t)ROTL((uint32_t)123456789, 10) == 1865700381);
    return 0;
}
