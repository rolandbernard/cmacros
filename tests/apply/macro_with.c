// test: Applyes a macro N times

#include <assert.h>

#include "apply.h"

#define TEST(A, B) (A + B)

int main() {
    assert(APPLY_WITH(TEST, (1), 0, 0) == 0);
    assert(APPLY_WITH(TEST, (2), 10, 0) == 20);
    assert(APPLY_WITH(TEST, (3), 100, 0) == 300);
    assert(APPLY_WITH(TEST, (4), 250, 0) == 1000);
    return 0;
}
