// test: Applyes a function N times

#include <assert.h>

#include "apply.h"

int test(int a, int b) {
    return a + b;
}

int main() {
    assert(APPLY_WITH(test, (1), 0, 0) == 0);
    assert(APPLY_WITH(test, (2), 10, 0) == 20);
    assert(APPLY_WITH(test, (3), 100, 0) == 300);
    assert(APPLY_WITH(test, (4), 250, 0) == 1000);
    return 0;
}
