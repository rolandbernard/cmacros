// test: Applyes a macro N times

#include <assert.h>

#include "apply.h"

#define TEST(N) (N + 1)

int main() {
    assert(APPLY(TEST, 0, 0) == 0);
    assert(APPLY(TEST, 10, 0) == 10);
    assert(APPLY(TEST, 100, 0) == 100);
    assert(APPLY(TEST, 250, 0) == 250);
    return 0;
}
