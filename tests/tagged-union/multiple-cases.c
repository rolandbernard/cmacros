// test: Simple enum

#include <assert.h>

#include "tagged-union.h"

TAGGED_UNION(TestUnion,
    (IntFloat) struct {
        int a;
        float b;
    },
    (Int) int,
    (Float) float,
    (None),
)

int main() {
    TestUnion e;
    e.kind = TestUnionKindNone;
    assert(e.kind == TestUnionKindNone);
    e.kind = TestUnionKindIntFloat;
    e.unsafe.IntFloat.a = 42;
    e.unsafe.IntFloat.b = 4.25;
    assert(e.kind == TestUnionKindIntFloat);
    assert(e.unsafe.IntFloat.a == 42);
    assert(e.unsafe.IntFloat.b == 4.25);
    e.kind = TestUnionKindInt;
    e.unsafe.Int = 42;
    assert(e.kind == TestUnionKindInt);
    assert(e.unsafe.Int == 42);
    e.kind = TestUnionKindFloat;
    e.unsafe.Float = 4.25;
    assert(e.kind == TestUnionKindFloat);
    assert(e.unsafe.Float == 4.25);
    return 0;
}

