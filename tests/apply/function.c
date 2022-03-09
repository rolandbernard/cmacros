// test: Applyes a function N times

#include <assert.h>

#include "apply.h"

int test(int a) {
    return a + 1;
}

int main() {
    assert(APPLY(test, 0, 0) == 0);
    assert(APPLY(test, 10, 0) == 10);
    assert(APPLY(test, 100, 0) == 100);
    assert(APPLY(test, 250, 0) == 250);
    return 0;
}
