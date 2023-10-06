#ifndef WTFC_H
#define WTFC_H

#include <stddef.h>
#include <stdint.h>
#include <limits.h>

/* typedefs */
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef float f32;
typedef double f64;
typedef long double f128;

typedef uint_fast8_t uf8;
typedef uint_fast16_t uf16;
typedef uint_fast32_t uf32;
typedef uint_fast64_t uf64;

typedef int_fast8_t if8;
typedef int_fast16_t if16;
typedef int_fast32_t if32;
typedef int_fast64_t if64;

typedef uint_least8_t ul8;
typedef uint_least16_t ul16;
typedef uint_least32_t ul32;
typedef uint_least64_t ul64;

typedef uintptr_t uptr;
typedef intptr_t iptr;

typedef size_t usize;
typedef ptrdiff_t dptr;

typedef uintmax_t umax;
typedef intmax_t imax;

/* limits */
/* max */
#define U8_MAX UINT8_MAX
#define U16_MAX UINT16_MAX
#define U32_MAX UINT32_MAX
#define U64_MAX UINT64_MAX

#define I8_MAX INT8_MAX
#define I16_MAX INT16_MAX
#define I32_MAX INT32_MAX
#define I64_MAX INT64_MAX

#define F32_MAX __FLT_MAX__
#define F64_MAX __DBL_MAX__
#define F128_MAX __LDBL_MAX__

#define UF8_MAX UINT_FAST8_MAX
#define UF16_MAX UINT_FAST16_MAX
#define UF32_MAX UINT_FAST32_MAX
#define UF64_MAX UINT_FAST64_MAX

#define IF8_MAX INT_FAST8_MAX
#define IF16_MAX INT_FAST16_MAX
#define IF32_MAX INT_FAST32_MAX
#define IF64_MAX INT_FAST64_MAX

#define UPTR_MAX UINTPTR_MAX
#define IPTR_MAX INTPTR_MAX

#define USIZE_MAX SIZE_MAX
#define DPTR_MAX PTRDIFF_MAX

/* min */
#define U8_MIN UINT8_MIN
#define U16_MIN UINT16_MIN
#define U32_MIN UINT32_MIN
#define U64_MIN UINT64_MIN

#define I8_MIN INT8_MIN
#define I16_MIN INT16_MIN
#define I32_MIN INT32_MIN
#define I64_MIN INT64_MIN

#define F32_MIN __FLT_MIN__
#define F64_MIN __DBL_MIN__
#define F128_MIN __LDBL_MIN__

#define UF8_MIN UINT_FAST8_MIN
#define UF16_MIN UINT_FAST16_MIN
#define UF32_MIN UINT_FAST32_MIN
#define UF64_MIN UINT_FAST64_MIN

#define IF8_MIN INT_FAST8_MIN
#define IF16_MIN INT_FAST16_MIN
#define IF32_MIN INT_FAST32_MIN
#define IF64_MIN INT_FAST64_MIN

#define UPTR_MIN UINTPTR_MIN
#define IPTR_MIN INTPTR_MIN

#define USIZE_MIN SIZE_MIN
#define DPTR_MIN PTRDIFF_MIN

/* width */
#define U8_WIDTH UINT8_WIDTH
#define U16_WIDTH UINT16_WIDTH
#define U32_WIDTH UINT32_WIDTH
#define U64_WIDTH UINT64_WIDTH

#define I8_WIDTH INT8_WIDTH
#define I16_WIDTH INT16_WIDTH
#define I32_WIDTH INT32_WIDTH
#define I64_WIDTH INT64_WIDTH

#define F32_WIDTH __FLT_WIDTH__
#define F64_WIDTH __DBL_WIDTH__
#define F128_WIDTH __LDBL_WIDTH__

#define UF8_WIDTH UINT_FAST8_WIDTH
#define UF16_WIDTH UINT_FAST16_WIDTH
#define UF32_WIDTH UINT_FAST32_WIDTH
#define UF64_WIDTH UINT_FAST64_WIDTH

#define IF8_WIDTH INT_FAST8_WIDTH
#define IF16_WIDTH INT_FAST16_WIDTH
#define IF32_WIDTH INT_FAST32_WIDTH
#define IF64_WIDTH INT_FAST64_WIDTH

#define UPTR_WIDTH UINTPTR_WIDTH
#define IPTR_WIDTH INTPTR_WIDTH

#define USIZE_WIDTH SIZE_WIDTH
#define DPTR_WIDTH PTRDIFF_WIDTH

#endif /* WTFC_H */