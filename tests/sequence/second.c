// test: Get the second element

#include <assert.h>

#include "sequence.h"

int main() {
    assert(SECOND((1)(2)(3)) == 2);
    assert(SECOND((2)(3) dont include this, or this, or this) == 3);
    assert(SECOND((hello world) (1) something else, right) == 1);
    return 0;
}
