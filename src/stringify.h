#ifndef _STRINGIFY_H_
#define _STRINGIFY_H_

#define STRINGIFY0(...) #__VA_ARGS__
#define STRINGIFY1(...) STRINGIFY0(__VA_ARGS__)
#define STRINGIFY2(...) STRINGIFY1(__VA_ARGS__)
#define STRINGIFY(...) STRINGIFY2(__VA_ARGS__)

#define CONCAT(A, B) A ## B

#endif
