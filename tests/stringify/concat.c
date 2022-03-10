// test: Combines two tokens

#include <assert.h>
#include <string.h>

#include "stringify.h"

int main() {
    assert(strcmp(STRINGIFY(CONCAT(A, B)), "AB") == 0);
    assert(CONCAT(12, 34)== 1234);
    int test = 42;
    assert(CONCAT(te, st)== test);
    return 0;
}

