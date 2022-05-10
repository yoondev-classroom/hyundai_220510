// 4_typedef.c
#include <stdio.h>

// 1. typedef는 기존 타입에 새로운 별명을 부여할 수 있습니다.
typedef int int32;
typedef char int8;

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

int main()
{
}
