// test: Allocates an array fitting the given number of elements of the type

#include <assert.h>

#include "alloc.h"

typedef struct {
    int a;
    int b;
    long c;
} Test;

int main() {
    Test* test = ALLOC(Test, 500);
    for (int i = 0; i < 500; i++) {
        test[i].a = i;
        test[i].b = 2 * i;
        test[i].c = i * i;
    }
    for (int i = 0; i < 500; i++) {
        assert(test[i].a == i);
        assert(test[i].b == 2 * i);
        assert(test[i].c == i * i);
    }
    FREE(test);
    return 0;
}

