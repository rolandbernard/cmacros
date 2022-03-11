// test: Simple enum

#include <assert.h>

#include "tagged-union.h"

TAGGED_UNION(TestUnion,
    (Test1, Test2, Test3) struct {
        int a;
        float b;
    },
    (Test4, Test5) int,
)

int main() {
    TestUnion e;
    e.kind = TestUnionKindTest1;
    e.unsafe.Test1.a = 42;
    e.unsafe.Test1.b = 4.25;
    assert(e.kind == TestUnionKindTest1);
    assert(e.unsafe.Test1.a == 42);
    assert(e.unsafe.Test1.b == 4.25);
    e.kind = TestUnionKindTest2;
    e.unsafe.Test2.a = 42;
    e.unsafe.Test2.b = 4.25;
    assert(e.kind == TestUnionKindTest2);
    assert(e.unsafe.Test2.a == 42);
    assert(e.unsafe.Test2.b == 4.25);
    e.kind = TestUnionKindTest3;
    e.unsafe.Test3.a = 42;
    e.unsafe.Test3.b = 4.25;
    assert(e.kind == TestUnionKindTest3);
    assert(e.unsafe.Test3.a == 42);
    assert(e.unsafe.Test3.b == 4.25);
    e.kind = TestUnionKindTest4;
    e.unsafe.Test4 = 42;
    assert(e.kind == TestUnionKindTest4);
    assert(e.unsafe.Test4 == 42);
    e.kind = TestUnionKindTest5;
    e.unsafe.Test5 = 42;
    assert(e.kind == TestUnionKindTest5);
    assert(e.unsafe.Test5 == 42);
    return 0;
}

