// test: If empty take it

#include <assert.h>

#include "if-empty.h"

#define SOMETHING

int main() {
    IF_EMPTY(SOMETHING)(return 0;)
    return 1;
}
