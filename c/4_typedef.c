// 4_typedef.c
#include <stdio.h>

// 1. typedef는 기존 타입에 새로운 별명을 부여할 수 있습니다.
// => type aliasing
typedef int int32;
typedef char int8;
typedef int MYINT;
typedef int AGE_TYPE;

#if 0
int main(void)
{
    int32 a;
    int8 b;

    return 0;
}
#endif

// 2. typedef 활용
// > 복잡한 타입 표현식을 typedef를 통해 간결하게 표현할 수 있습니다.

typedef int (*PARR3)[3];

// PARR3 foo()
int (*foo())[3]
{
    static int x[3] = { 10, 20, 30 };
    return &x;
    // int(*)[3]
}

int main(void)
{
}

int (*foo())[3];
// foo()
// -> foo는 함수 입니다.

// (*foo())
// -> 반환 타입은 포인터입니다.

// int (*foo())[3]
// -> 포인터가 가르키는 타입은 int[3] 배열입니다.