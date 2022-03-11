// test: Simple enum

#include <assert.h>

#include "tagged-union.h"
#include "tagged-match.h"

TAGGED_UNION(TestEnum,
    (Test1, Test2, Test3, Test4)
)

int main() {
    int a = 0;
    TAGGED_MATCH(TestEnum, TAGGED_EMPTY_NEW(TestEnum, Test1),
        (Test1, Test2, Test4, Test3) () {
            a = 1;
        },
    )
    assert(a == 1);
    TAGGED_MATCH(TestEnum, TAGGED_EMPTY_NEW(TestEnum, Test2),
        (Test1, Test2, Test4, Test3) () {
            a = 2;
        },
    )
    assert(a == 2);
    TAGGED_MATCH(TestEnum, TAGGED_EMPTY_NEW(TestEnum, Test3),
        (Test1, Test2, Test4, Test3) () {
            a = 3;
        },
    )
    assert(a == 3);
    TAGGED_MATCH(TestEnum, TAGGED_EMPTY_NEW(TestEnum, Test4),
        (Test1, Test2, Test4, Test3) () {
            a = 4;
        },
    )
    assert(a == 4);
    return 0;
}

