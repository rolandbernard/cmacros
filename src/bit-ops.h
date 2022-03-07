#ifndef _BIT_OPS_H_
#define _BIT_OPS_H_

#define CHAR_BIT 8

#define ROTR(X, N) (((X) >> (N)) | ((X) << (CHAR_BIT * sizeof(X) - (N))))
#define ROTL(X, N) (((X) << (N)) | ((X) >> (CHAR_BIT * sizeof(X) - (N))))

#define GET_BIT(X, N) (((X) >> (N)) & 1)
#define SET_BIT(X, N) ((X) | (1 << (N)))
#define CLEAR_BIT(X, N) ((X) & ~(1 << (N)))

#define SIGN_BIT(X) (((X) >> (CHAR_BIT * sizeof(X) - 1)) & 1)
#define SIGN_MASK(X) ((X) >> (CHAR_BIT * sizeof(X) - 1))

#define ABS(X) (((X) + SIGN_MASK(X)) ^ SIGN_MASK(X))

#define LSB(X) ((X) & -(X))

#define IS_POW2(X) ((X) & ((X) - 1)) == 0

#endif
