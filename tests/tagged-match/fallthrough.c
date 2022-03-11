// test: Simple enum

#include <assert.h>

#include "tagged-union.h"
#include "tagged-match.h"

TAGGED_UNION(TestEnum,
    (Test1, Test2, Test3, Test4)
)

int main() {
    TAGGED_MATCH(TestEnum, TAGGED_EMPTY_NEW(TestEnum, Test3),
        (Test1) () {
            return 1;
        },
        (Test2) () {
            return 1;
        },
        (Test4) () {
            return 1;
        },
    )
    return 0;
}

