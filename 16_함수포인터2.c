// 16_함수포인터2.c
#include <stdio.h>

// 1. 함수 포인터가 있습니다.
// => 함수의 주소를 가지고 있는 포인터 변수 타입입니다.

// 2. 함수의 타입
// => 함수의 타입은 인자와 반환타입에 의해 결정됩니다.
// => 함수의 타입은 함수의 시그니처(반환타입, 인자타입)에 의해 결정됩니다.
// => 함수의 시그니처가 동일하면 같은 타입입니다.

// 3. 함수 포인터 변수를 통해서 함수를 호출할 수 있습니다.
// 4. 함수 포인터를 사용하는 방법
#if 0
int (*fp)(int, int) = NULL;

fp = &add;
(*fp)(10, 20);

fp = add;
fp(10, 20);

#endif

int add(int a, int b)
{
    return a + b;
}
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