// test: gives length of staticly sized global array

#include <assert.h>

#include "array-len.h"

typedef struct {
    int a;
    int b;
    long c;
} Test;

Test test[321];

int main() {
    assert(ARRAY_LEN(test) == 321);
    return 0;
}
