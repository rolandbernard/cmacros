// test: gives length of staticly sized int array

#include <assert.h>

#include "array-len.h"

int main() {
    int test[512];
    assert(ARRAY_LEN(test) == 512);
    return 0;
}
