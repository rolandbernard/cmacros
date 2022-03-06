#ifndef _EXPAND_H_
#define _EXPAND_H_

#define EXPAND0(...) __VA_ARGS__
#define EXPAND1(...) EXPAND0(EXPAND0(EXPAND0(EXPAND0(__VA_ARGS__))))
#define EXPAND2(...) EXPAND1(EXPAND1(EXPAND1(EXPAND1(__VA_ARGS__))))
#define EXPAND3(...) EXPAND2(EXPAND2(EXPAND2(EXPAND2(__VA_ARGS__))))
#define EXPAND4(...) EXPAND3(EXPAND3(EXPAND3(EXPAND3(__VA_ARGS__))))
#define EXPAND(...) EXPAND4(__VA_ARGS__)

#endif