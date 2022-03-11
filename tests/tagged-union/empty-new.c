// test: Simple enum

#include <assert.h>

#include "tagged-union.h"

TAGGED_UNION(TestUnion,
    (Test1, Test2, Test3) struct {
        int a;
        float b;
    },
    (Test4, Test5) int,
    (Test6, Test7),
)

int main() {
    TestUnion e1 = TAGGED_EMPTY_NEW(TestUnion, Test6);
    assert(e1.kind == TestUnionKindTest6);
    TestUnion e2 = TAGGED_EMPTY_NEW(TestUnion, Test7);
    assert(e2.kind == TestUnionKindTest7);
    return 0;
}

