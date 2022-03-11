// test: Simple enum

#include <assert.h>

#include "tagged-union.h"

TAGGED_STRUCT(TestUnion,
    (
        int a;
        float b;
    ),
    (Test1, Test2, Test3) struct {
        int a;
        float b;
    },
    (Test4, Test5) int,
    (Test6, Test7),
)

int main() {
    TestUnion e1 = TAGGED_COMMON_EMPTY_NEW(TestUnion, Test6, (.a = 1, .b = 2));
    assert(e1.kind == TestUnionKindTest6);
    assert(e1.a == 1);
    assert(e1.b == 2);
    TestUnion e2 = TAGGED_COMMON_EMPTY_NEW(TestUnion, Test7, (.a = 5, .b = 6));
    assert(e2.kind == TestUnionKindTest7);
    assert(e2.a == 5);
    assert(e2.b == 6);
    return 0;
}

