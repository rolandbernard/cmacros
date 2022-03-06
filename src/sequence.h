#ifndef _SEQUENCE_H_
#define _SEQUENCE_H_

#include "if-empty.h"
#include "repeat.h"

#define FIRST_HELPER(...) __VA_ARGS__ EMPTY (
#define FIRST(...) FIRST_HELPER __VA_ARGS__ )
#define REST(...) EMPTY __VA_ARGS__

#define GET_SEQ_ELEMENT(I, SEQ) FIRST(EXPAND(REPEAT(I, EMPTY) SEQ))

#endif
