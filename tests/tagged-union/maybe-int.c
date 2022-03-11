// test: Simple enum

#include <assert.h>

#include "tagged-union.h"

TAGGED_UNION(MaybeInt,
    (Just) int,
    (Nothing),
)

int main() {
    MaybeInt e;
    e.kind = MaybeIntKindNothing;
    assert(e.kind == MaybeIntKindNothing);
    e.kind = MaybeIntKindJust;
    e.unsafe.Just = 42;
    assert(e.kind == MaybeIntKindJust);
    assert(e.unsafe.Just == 42);
    return 0;
}

