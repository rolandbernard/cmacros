// test: gives length of staticly sized array of structs

#include <assert.h>

#include "array-len.h"

typedef struct {
    int a;
    int b;
    long c;
} Test;

int main() {
    Test test[438];
    assert(ARRAY_LEN(test) == 438);
    return 0;
}
