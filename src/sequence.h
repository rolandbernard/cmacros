#ifndef _SEQUENCE_H_
#define _SEQUENCE_H_

#include "for-each.h"
#include "apply.h"

#define SEQ_EMPTY(...)

#define FIRST_HELPER(...) __VA_ARGS__ SEQ_EMPTY (
#define FIRST(...) FIRST_HELPER __VA_ARGS__ )
#define REST(...) SEQ_EMPTY __VA_ARGS__
#define SECOND(...) FIRST(REST(__VA_ARGS__))

#define GET_SEQ_ELEMENT(I, ...) FIRST(APPLY(REST, I, __VA_ARGS__))

#define SEQUENCE_ELEMENT(...) (__VA_ARGS__)
#define TO_SEQUENCE(...) __VA_OPT__(FOR_EACH(SEQUENCE_ELEMENT, __VA_ARGS__))

#endif
