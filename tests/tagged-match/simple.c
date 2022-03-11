// test: Simple enum

#include <assert.h>

#include "tagged-union.h"
#include "tagged-match.h"

TAGGED_UNION(TestEnum,
    (Test1, Test2, Test3, Test4)
)

int main() {
    TAGGED_MATCH(TestEnum, TAGGED_EMPTY_NEW(TestEnum, Test3),
        (Test1) () {},
        (Test2) () {},
        (Test4) () {},
        (Test3) () {
            return 0;
        },
    )
    return 1;
}

