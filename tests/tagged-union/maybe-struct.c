// test: Simple enum

#include <assert.h>

#include "tagged-union.h"

TAGGED_UNION(MaybeStruct,
    (Just) struct {
        int a;
        float b;
    },
    (Nothing),
)

int main() {
    MaybeStruct e;
    e.kind = MaybeStructKindNothing;
    assert(e.kind == MaybeStructKindNothing);
    e.kind = MaybeStructKindJust;
    e.unsafe.Just.a = 42;
    e.unsafe.Just.b = 4.25;
    assert(e.kind == MaybeStructKindJust);
    assert(e.unsafe.Just.a == 42);
    assert(e.unsafe.Just.b == 4.25);
    return 0;
}

