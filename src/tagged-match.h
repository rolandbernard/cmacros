#ifndef _TAGGED_MATCH_H_
#define _TAGGED_MATCH_H_

#include "for-each.h"
#include "sequence.h"
#include "stringify.h"

#define TAGGED_MATCH_CASE(NAME, VALUE, CODE, VAR, FIELD) \
    case NAME ## Kind ## FIELD: { IF_NOT_EMPTY(VAR)(NAME ## FIELD VAR = VALUE.unsafe.FIELD;) CODE; break; }

#define TAGGED_MATCH_COMMON_CASE(NAME, VALUE, CASE) \
    FOR_EACH_WITH_SIMPLE(TAGGED_MATCH_CASE, (NAME, VALUE, REST(REST(CASE)), SECOND(CASE)), FIRST(CASE))

#define TAGGED_MATCH_CASES(NAME, VALUE, ...) \
    FOR_EACH_WITH(TAGGED_MATCH_COMMON_CASE, (NAME, VALUE), __VA_ARGS__)

#define TAGGED_MATCH_HELPER(NAME, VAR, VALUE, ...) {\
        NAME VAR = VALUE; \
        switch (VAR.kind) { \
            TAGGED_MATCH_CASES(NAME, VAR, __VA_ARGS__) \
        } \
    }

#define COMBINE(A, B) CONCAT(A, B)

#define TAGGED_MATCH(NAME, VALUE, ...) TAGGED_MATCH_HELPER(NAME, COMBINE(__tmp_match_value, __COUNTER__), VALUE, __VA_ARGS__)

#endif
