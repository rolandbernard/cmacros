// test: Partialy apply the function

#include <assert.h>

#include "curry.h"

#define TEST(A, B, C) (A + B + C)

int main() {
    assert(CURRY(TEST, 1, 2)(3) == 6);
    assert(CURRY(TEST, 2, 3)(4) == 9);
    assert(CURRY(TEST, 3, 4)(5) == 12);
    assert(CURRY(TEST, 4, 5)(6) == 15);
    return 0;
}
