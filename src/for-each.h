#ifndef _FOR_EACH_H_
#define _FOR_EACH_H_

#include "curry.h"
#include "expand.h"

#define FOR_EACH_PARENS ()

#define FOR_EACH_WITH(FUNC, ARGS, ...) \
    __VA_OPT__(EXPAND(FOR_EACH_WITH_HELPER(FUNC, ARGS, __VA_ARGS__)))

#define FOR_EACH_WITH_SIMPLE(FUNC, ARGS, ...) \
    __VA_OPT__(FOR_EACH_WITH_HELPER(FUNC, ARGS, __VA_ARGS__))

#define FOR_EACH_WITH_HELPER(FUNC, ARGS, ARG1, ...) \
    CURRY_WITH(FUNC, ARGS)(ARG1) __VA_OPT__(FOR_EACH_WITH_AGAIN FOR_EACH_PARENS (FUNC, ARGS, __VA_ARGS__))

#define FOR_EACH_WITH_AGAIN() FOR_EACH_WITH_HELPER

#define FOR_EACH_WITH_JOIN(FUNC, ARGS, JOIN, ...) \
    __VA_OPT__(FOR_EACH_WITH_JOIN_HELPER(FUNC, ARGS, JOIN, __VA_ARGS__))

#define FOR_EACH_WITH_JOIN_HELPER(FUNC, ARGS, JOIN, ARG1, ...) \
    EXPAND_1(CURRY_WITH(FUNC, ARGS)(ARG1)) __VA_OPT__(FOR_EACH_WITH(WITH_JOIN_HELPER, (JOIN, FUNC, ARGS), __VA_ARGS__))

#define WITH_JOIN_HELPER(JOIN, FUNC, ARGS, ARG) JOIN() CURRY_WITH(FUNC, ARGS)(ARG)

#define FOR_EACH(FUNC, ...) \
    __VA_OPT__(FOR_EACH_WITH(FUNC, (), __VA_ARGS__))

#define FOR_EACH_JOIN(FUNC, JOIN, ...) \
    __VA_OPT__(FOR_EACH_WITH_JOIN(FUNC, (), JOIN, __VA_ARGS__))

#endif
