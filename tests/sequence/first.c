// test: Get the first element

#include <assert.h>

#include "sequence.h"

int main() {
    assert(FIRST((1)(2)(3)) == 1);
    assert(FIRST((2) dont include this, or this, or this) == 2);
    assert(FIRST((3) test() {FIRST((2))}) == 3);
    return 0;
}
