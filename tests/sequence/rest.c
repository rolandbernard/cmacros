// test: Remove the first element

#include <assert.h>

#include "sequence.h"

int test() {
    return 42;
}

int main() {
    assert(REST((1)2) == 2);
    assert(REST((1) test()) == 42);
    assert(FIRST(REST((1)(3)(2))) == 3);
    return 0;
}
