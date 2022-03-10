// test: Repeat content N times

#include <assert.h>

#include "repeat.h"

int main() {
    int test = 0;
    REPEAT(10, test += 4, test -= 3;)
    assert(test == 10);
    REPEAT(100, test += 4, test -= 2;)
    assert(test == 210);
    REPEAT(250, test += 5, test -= 1;)
    assert(test == 1210);
    return 0;
}
