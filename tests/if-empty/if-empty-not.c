// test: If not empty don't take it

#include <assert.h>

#include "if-empty.h"

int main() {
    IF_EMPTY(SOMETHING)(return 1;)
    return 0;
}
