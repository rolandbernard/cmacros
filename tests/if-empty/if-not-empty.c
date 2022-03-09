// test: If not empty take it

#include <assert.h>

#include "if-empty.h"

int main() {
    IF_NOT_EMPTY(SOMETHING)(return 0;)
    return 1;
}
