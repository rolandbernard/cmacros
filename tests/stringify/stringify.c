// test: Converts arguments to a string

#include <assert.h>
#include <string.h>

#include "stringify.h"

int main() {
    assert(strcmp(STRINGIFY(Hello), "Hello") == 0);
    assert(strcmp(STRINGIFY(Hello, world), "Hello, world") == 0);
    assert(strcmp(STRINGIFY(Hello, world!), "Hello, world!") == 0);
    return 0;
}

