// test: Repeat content N times

#include <assert.h>

#include "repeat.h"

#define TEST(N) test += N;

int main() {
    int test = 0;
    REPEAT(10, TEST(1))
    assert(test == 10);
    REPEAT(100, TEST(1))
    assert(test == 110);
    REPEAT(250, TEST(1))
    assert(test == 360);
    return 0;
}
