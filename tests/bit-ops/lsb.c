// test: Read one bit from an integer

#include <assert.h>
#include <stdint.h>

#include "bit-ops.h"

int main() {
    assert(LSB(0) == 0);
    assert(LSB(1) == 1);
    assert(LSB(100) == 4);
    assert(LSB(200) == 8);
    assert(LSB(512) == 512);
    return 0;
}
