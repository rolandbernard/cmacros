#ifndef _CURRY_H_
#define _CURRY_H_

#include "if-empty.h"

#define CURRY_CLOSE(...) __VA_OPT__(,) __VA_ARGS__ )
#define CURRY_BEGIN(...) ( __VA_ARGS__

#define CURRY_WITH(FUNC, ARGS) FUNC IF_NOT_EMPTY ARGS (CURRY_BEGIN ARGS CURRY_CLOSE)
#define CURRY(FUNC, ...) CURRY_WITH(FUNC, (__VA_ARGS__))

#endif
