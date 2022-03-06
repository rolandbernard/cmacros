#ifndef _IF_EMPTY_H_
#define _IF_EMPTY_H_

#define TAKE(...) __VA_ARGS__
#define EMPTY(...)

#define IF_EMPTY(...) TAKE __VA_OPT__(() EMPTY)
#define IF_NOT_EMPTY(...) EMPTY __VA_OPT__(() TAKE)

#endif
