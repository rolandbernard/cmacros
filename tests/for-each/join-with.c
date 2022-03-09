// test: Applyes a macro N times

#include <assert.h>

#include "for-each.h"

#define TEST(N, O, A) N[A] = A + O
#define SEMICOLON() ,

int main() {
    int test[5];
    FOR_EACH_WITH_JOIN(TEST, (test, 2), SEMICOLON, 0, 1, 2, 3, 4);
    assert(test[0] == 2);
    assert(test[1] == 3);
    assert(test[2] == 4);
    assert(test[3] == 5);
    assert(test[4] == 6);
    return 0;
}
