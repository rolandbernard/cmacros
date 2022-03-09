// test: Computes the right rotation of the integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert((uint16_t)ROTR((uint16_t)2, 1) == 1);
    assert((uint16_t)ROTR((uint16_t)2, 2) == 32768);
    assert((uint32_t)ROTR((uint32_t)123456789, 10) == 1161942771);
    return 0;
}
