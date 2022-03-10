// test: Get the Nth element

#include <assert.h>

#include "sequence.h"

int main() {
    assert(GET_SEQ_ELEMENT(0, (1)(2)(3)) == 1);
    assert(GET_SEQ_ELEMENT(0, (2) dont include this, or this, or this) == 2);
    assert(GET_SEQ_ELEMENT(0, (3) test() {FIRST((2))}) == 3);
    assert(GET_SEQ_ELEMENT(1, (1)(2)(3)) == 2);
    assert(GET_SEQ_ELEMENT(2, (1)(2)(3)) == 3);
    assert(GET_SEQ_ELEMENT(5, (a)(b)(c)(d(e, f))(g h)(4)(j)) == 4);
    return 0;
}

