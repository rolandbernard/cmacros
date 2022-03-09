// test: If empty don't take it

#include <assert.h>

#include "if-empty.h"

int main() {
    IF_NOT_EMPTY()(return 1;)
    return 0;
}
