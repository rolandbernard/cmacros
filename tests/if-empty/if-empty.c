// test: If empty take it

#include <assert.h>

#include "if-empty.h"

int main() {
    IF_EMPTY()(return 0;)
    return 1;
}
