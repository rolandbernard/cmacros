// test: Allocates space for a single object of the type

#include <assert.h>

#include "alloc.h"

typedef struct {
    int a;
    int b;
    long c;
} Test;

int main() {
    Test* test = NEW(Test);
    test->a = 42;
    test->b = 23;
    test->c = 12;
    assert(test->a == 42);
    assert(test->b == 23);
    assert(test->c == 12);
    FREE(test);
    int* test2 = NEW(int);
    *test2 = 64;
    assert(*test2 == 64);
    FREE(test2);
    return 0;
}

