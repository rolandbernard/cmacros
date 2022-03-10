// test: Convert arguments to a sequence

#include <assert.h>

#include "sequence.h"

int main() {
    assert(GET_SEQ_ELEMENT(0, TO_SEQUENCE(1, 2, 3)) == 1);
    assert(GET_SEQ_ELEMENT(0, TO_SEQUENCE(2, 3, 4)) == 2);
    assert(GET_SEQ_ELEMENT(0, TO_SEQUENCE(3, 4, 5)) == 3);
    assert(GET_SEQ_ELEMENT(1, TO_SEQUENCE(1, 2, 3)) == 2);
    assert(GET_SEQ_ELEMENT(2, TO_SEQUENCE(1, 2, 3)) == 3);
    assert(GET_SEQ_ELEMENT(5, TO_SEQUENCE(0, 0, 0, 0, 0, 4, 0, 0, 0)) == 4);
    return 0;
}
