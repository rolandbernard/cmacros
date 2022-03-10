// test: Repeat content N times
// build: gcc -o %.out % -Isrc
// buildtime: < 10s

#include <assert.h>

#include "repeat.h"

int main() {
    int test = 0;
    REPEATN(0, 0, 0, 200, test += 1;)
    assert(test == 200);
    REPEATN(0, 0, 100, 200, test += 1;)
    assert(test == 26000);
    return 0;
}
