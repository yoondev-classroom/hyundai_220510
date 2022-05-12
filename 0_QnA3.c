#include <stdio.h>

// typedef
// 1) 기존 타입의 별칭을 부여할 수 있습니다.
// 2) 복잡한 타입을 간결하게 표현할 수 있습니다.

typedef int MY_INT;

typedef int (*PARR5)[5];
typedef int (*FP)(int, int);

int main(void)
{
    // 배열 포인터
    // int(*p1)[5];
    PARR5 p1;
    // 함수 포인터
    // int (*p2)(int, int);
    FP p2;

    int a = 10;
    MY_INT b = 20;

    return 0;
}