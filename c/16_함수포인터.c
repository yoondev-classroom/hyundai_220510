// 16_함수포인터.c
#include <stdio.h>

// 함수 포인터
// => 함수를 가르키는 포인터 변수 타입입니다.

// int* ----> int

#if 1
// foo의 타입은 무엇인가요?
// void(*)(void) ---> void(void)
void foo(void)
{
    printf("foo\n");
}

int main(void)
{
    void (*p)(void) = &foo;
    (*p)();

    void (*p1)(void) = foo;
    p1();

    return 0;
}
#endif

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b) { return a - b; }

// int(int, int)
// int(int, int)
// > 함수의 인자와 반환타입의 정보가 동일하면 같은 타입이다.
// => 함수의 시그니처가 동일하면 같은 타입이다.

// int(*)(int, int) ---> int(int, int)

#if 0
int main(void)
{
    int (*p)(int, int) = NULL;

    int cmd;
    scanf("%d", &cmd);

    if (cmd == 0) {
        p = &add;
    } else {
        p = &sub;
    }

    printf("%d\n", (*p)(100, 20));
    return 0;
}
#endif