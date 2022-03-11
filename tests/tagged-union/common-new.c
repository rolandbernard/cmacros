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
    TestUnion e1 = TAGGED_COMMON_NEW(TestUnion, Test1, (.a = 1, .b = 2), {.a = 3, .b = 4});
    assert(e1.kind == TestUnionKindTest1);
    assert(e1.a == 1);
    assert(e1.b == 2);
    assert(e1.unsafe.Test1.a == 3);
    assert(e1.unsafe.Test1.b == 4);
    TestUnion e2 = TAGGED_COMMON_NEW(TestUnion, Test4, (.a = 5, .b = 6), 7);
    assert(e2.kind == TestUnionKindTest4);
    assert(e2.a == 5);
    assert(e2.b == 6);
    assert(e2.unsafe.Test5 == 7);
    TestUnion e3 = TAGGED_COMMON_NEW(TestUnion, Test5, (.a = 8, .b = 9), 10);
    assert(e3.kind == TestUnionKindTest5);
    assert(e3.a == 8);
    assert(e3.b == 9);
    assert(e3.unsafe.Test5 == 10);
    return 0;
}

