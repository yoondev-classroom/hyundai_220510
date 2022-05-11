// 13_포인터.c
#include <stdio.h>

// 1. C언어에서 함수의 인자를 전달할 때, 복사를 수행합니다.
#if 0
// call by value
void inc(int n)
{
    ++n;
}

int main(void)
{
    int n = 0;
    inc(n);
    inc(n);
    inc(n);

    printf("n: %d\n", n);

    return 0;
}
#endif

// 2. 포인터
//   필요성: 다른 함수를 통해 변수의 값을 변경하기 위해서 필요합니다.
#if 0
int main(void)
{
    int n = 0;

    printf("%p\n", &n); // 0x16f0731e8

    // 주소를 담을 수 있는 타입 - 포인터 타입
    // => 주소를 통해 가르키는 변수의 값을 읽거나 변경할 수 있습니다.
    int* p = &n;
    printf("%p\n", p);

    printf("%d\n", *p);
    *p = 100;

    printf("%d\n", n);

    return 0;
}
#endif

// call by reference
void inc(int* p)
{
    ++(*p);
}

int inc2(int n)
{
    return ++n;
}

int main(void)
{
    int n = 0;
    inc(&n);
    inc(&n);
    inc(&n);

    n = inc2(n);
    n = inc2(n);
    n = inc2(n);

    printf("%d\n", n);

    return 0;
}
