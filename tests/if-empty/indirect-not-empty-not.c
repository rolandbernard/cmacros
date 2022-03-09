// test: If empty don't take it

#include <assert.h>

#include "if-empty.h"

#define SOMETHING

int main() {
    IF_NOT_EMPTY(SOMETHING)(return 1;)
    return 0;
}
