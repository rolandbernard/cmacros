// test: Applyes a macro N times

#include <assert.h>

#include "for-each.h"

#define TEST(A) (A + 1)
#define COMMA() ,

int main() {
    int test[] = {
        FOR_EACH_JOIN(TEST, COMMA, 1, 2, 3, 4, 5)
    };
    assert(test[0] == 2);
    assert(test[1] == 3);
    assert(test[2] == 4);
    assert(test[3] == 5);
    assert(test[4] == 6);
    return 0;
}
