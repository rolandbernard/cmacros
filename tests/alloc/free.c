// test: Frees the memory allocated by a call to ALLOC/CALLOC/REALLOC

#include <assert.h>

#include "alloc.h"

int main() {
    int* test0 = CALLOC(int, 512);
    float* test1 = CALLOC(float, 256);
    long* test2 = CALLOC(long, 1024);
    FREE(test1);
    FREE(test0);
    double* test3 = CALLOC(double, 512);
    FREE(test3);
    char* test4 = CALLOC(char, 2048);
    FREE(test4);
    FREE(test2);
    return 0;
}

