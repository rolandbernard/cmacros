// test: Simple enum

#include <assert.h>

#include "tagged-union.h"
#include "tagged-match.h"

TAGGED_UNION(TestEnum,
    (Test1, Test2) int,
    (Test3, Test4) float
)

int main() {
    int a = 0;
    TestEnum e1 = TAGGED_NEW(TestEnum, Test1, 42);
    TAGGED_MATCH(TestEnum, e1,
        (Test1, Test2, Test3, Test4) (n) {
            assert(n == 42);
            a = 1;
        },
    )
    assert(a == 1);
    TestEnum e2 = TAGGED_NEW(TestEnum, Test2, 12);
    TAGGED_MATCH(TestEnum, e2,
        (Test1, Test2, Test3, Test4) (n) {
            assert(n == 12);
            a = 2;
        },
    )
    assert(a == 2);
    TestEnum e3 = TAGGED_NEW(TestEnum, Test3, 72);
    TAGGED_MATCH(TestEnum, e3,
        (Test1, Test2, Test3, Test4) (n) {
            assert(n == 72);
            a = 3;
        },
    )
    assert(a == 3);
    TestEnum e4 = TAGGED_NEW(TestEnum, Test3, 123);
    TAGGED_MATCH(TestEnum, e4,
        (Test1, Test2, Test3, Test4) (n) {
            assert(n == 123);
            a = 4;
        },
    )
    assert(a == 4);
    return 0;
}

