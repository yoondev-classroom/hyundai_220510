// 16_함수포인터2.c
#include <stdio.h>

// 1. 함수 포인터가 있습니다.
// => 함수의 주소를 가지고 있는 포인터 변수 타입입니다.

int add(int a, int b) { return a + b; }
// int(int, int)

int mul(int a, int b) { return a * b; }
// int(int, int)

float div(int a, int b) { return (float)a / b; }
// float(int, int)

float div2(int a, int b)
{
    // float ret = a / b;
    //          int/int -> int
    // float ret = a / (float)b;
    //          int/float -> float/float -> float
    //          double/int -> double/double -> double
    // return ret;

    // 3.14  -> double
    // 3.14f -> float

    float result = a / 3.f;
    return result;
}

int main(void)
{
    printf("add: %p\n", &add);
    printf("div: %f\n", div2(100, 3));

    float (*p2)(int, int) = &div;
    printf("div: %f\n", (*p2)(100, 3));

    int a;
    a = 10; // 대입

    int (*p)(int, int);
    p = &add;
    p = &mul;

    // *p = 1000;
    // -> 함수 포인터를 통해 함수의 호출만 가능합니다.
    // => 값을 변경하는 것은 불가능합니다.

    int result = (*p)(10, 20);
    printf("%d\n", result);

    return 0;
}