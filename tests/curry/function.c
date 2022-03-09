// test: Applyes a macro N times

#include <assert.h>

#include "curry.h"

int test(int a, int b, int c) {
    return a + b + c;
}

int main() {
    assert(CURRY(test, 1, 2)(3) == 6);
    assert(CURRY(test, 2, 3)(4) == 9);
    assert(CURRY(test, 3, 4)(5) == 12);
    assert(CURRY(test, 4, 5)(6) == 15);
    return 0;
}
