#ifndef _TAGGED_UNION_H_
#define _TAGGED_UNION_H_

#include "expand.h"
#include "for-each.h"
#include "if-empty.h"
#include "sequence.h"

#define TAGGED_UNION(NAME, ...) TAGGED_STRUCT(NAME, (), __VA_ARGS__)

#define COMMA() ,

#define TAGGED_ENUM_NAME(NAME, FIELD) NAME ## Kind ## FIELD

#define TAGGED_ENUM_NAMES(NAME, ...) \
    FOR_EACH_WITH_JOIN(TAGGED_ENUM_NAME, (NAME), COMMA, FOR_EACH_JOIN(FIRST, COMMA, __VA_ARGS__))

#define TAGGED_UNION_TYPE(NAME, TYPE, FIELD) typedef TYPE NAME ## FIELD;

#define TAGGED_UNION_CASE_TYPES(NAME, CASE) \
    FOR_EACH_WITH_SIMPLE(TAGGED_UNION_TYPE, (NAME, REST(CASE)), FIRST(CASE))

#define TAGGED_UNION_TYPES(NAME, ...) \
    FOR_EACH_WITH(TAGGED_UNION_CASE_TYPES, (NAME), __VA_ARGS__)

#define TAGGED_UNION_FIELD(NAME, FIELD) NAME ## FIELD FIELD;

#define TAGGED_UNION_FIELDS(NAME, ...) \
    FOR_EACH_WITH(TAGGED_UNION_FIELD, (NAME), FOR_EACH_JOIN(FIRST, COMMA, __VA_ARGS__))

#define TAGGED_STRUCT(NAME, COMMON, ...) \
    typedef struct NAME NAME; \
    typedef enum NAME ## Kind NAME ## Kind; \
    enum NAME ## Kind { TAGGED_ENUM_NAMES(NAME, __VA_ARGS__) }; \
    TAGGED_UNION_TYPES(NAME, __VA_ARGS__) \
    struct NAME { \
        NAME ## Kind kind; \
        TAKE COMMON \
        union { \
            TAGGED_UNION_FIELDS(NAME, __VA_ARGS__) \
        } unsafe; \
    };

#endif
