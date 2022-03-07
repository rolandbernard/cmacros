#ifndef _ALLOC_H_
#define _ALLOC_H_

#include <stdlib.h>

#define NEW(TYPE) ALLOC(TYPE, 1)

#define ALLOC(TYPE, COUNT) ((TYPE*)BASE_ALLOC(sizeof(TYPE) * (COUNT)))

#define REALLOC(TYPE, OLD, COUNT) ((TYPE*)BASE_REALLOC(OLD, sizeof(TYPE) * (COUNT)))

#define CALLOC(TYPE, COUNT) ((TYPE*)BASE_CALLOC(COUNT, sizeof(TYPE)))

#define FREE(PTR) BASE_FREE(PTR)

#define BASE_ALLOC(SIZE) malloc(SIZE)

#define BASE_REALLOC(OLD, SIZE) realloc(OLD, SIZE)

#define BASE_CALLOC(NMEM, SIZE) calloc(NMEM, SIZE)

#define BASE_FREE(PTR) free(PTR)

#endif
