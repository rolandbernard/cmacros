// test: Applyes a function N times

#include <assert.h>

#include "curry.h"

int test(int a, int b, int c) {
    return a + b + c;
}

int main() {
    assert(CURRY_WITH(test, (1, 2))(3) == 6);
    assert(CURRY_WITH(test, (2, 3))(4) == 9);
    assert(CURRY_WITH(test, (3, 4))(5) == 12);
    assert(CURRY_WITH(test, (4, 5))(6) == 15);
    return 0;
}
