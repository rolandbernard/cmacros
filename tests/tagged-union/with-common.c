// test: Simple enum

#include <assert.h>

#include "tagged-union.h"

TAGGED_STRUCT(TestEnum,
    (
        int a;
        float b;
    ),
    (Test1, Test2, Test3, Test4)
)

int main() {
    TestEnum e;
    e.a = 42;
    e.b = 4.25;
    e.kind = TestEnumKindTest1;
    assert(e.kind == TestEnumKindTest1);
    e.kind = TestEnumKindTest2;
    assert(e.kind == TestEnumKindTest2);
    e.kind = TestEnumKindTest3;
    assert(e.kind == TestEnumKindTest3);
    e.kind = TestEnumKindTest4;
    assert(e.kind == TestEnumKindTest4);
    assert(e.a == 42);
    assert(e.b == 4.25);
    return 0;
}

