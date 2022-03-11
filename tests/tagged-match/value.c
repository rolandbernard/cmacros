// test: Simple enum

#include <assert.h>

#include "tagged-union.h"
#include "tagged-match.h"

TAGGED_UNION(TestEnum,
    (Test1, Test2) int,
    (Test3, Test4) struct {
        int a;
        float b;
    },
)

int main() {
    int a = 0;
    TestEnum e1 = TAGGED_NEW(TestEnum, Test1, 42);
    TAGGED_MATCH(TestEnum, e1,
        (Test1, Test2) (i) {
            assert(i == 42);
            a = 1;
        },
        (Test4, Test3) (s) {
            return 1;
        },
    )
    assert(a == 1);
    TestEnum e2 = TAGGED_NEW(TestEnum, Test2, 12);
    TAGGED_MATCH(TestEnum, e2,
        (Test1, Test2) (i) {
            assert(i == 12);
            a = 2;
        },
        (Test4, Test3) () {
            return 1;
        },
    )
    assert(a == 2);
    TestEnum e3 = TAGGED_NEW(TestEnum, Test3, {.a = 1, .b = 2});
    TAGGED_MATCH(TestEnum, e3,
        (Test1, Test2) () {
            return 1;
        },
        (Test4, Test3) (s) {
            assert(s.a == 1);
            assert(s.b == 2);
            a = 3;
        },
    )
    assert(a == 3);
    TestEnum e4 = TAGGED_NEW(TestEnum, Test3, {.a = 12, .b = 42});
    TAGGED_MATCH(TestEnum, e4,
        (Test1, Test2) (i) {
            return 1;
        },
        (Test4, Test3) (s) {
            assert(s.a == 12);
            assert(s.b == 42);
            a = 4;
        },
    )
    assert(a == 4);
    return 0;
}

