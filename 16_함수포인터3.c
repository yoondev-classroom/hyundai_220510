#include <stdio.h>

void foo(void)
{
    printf("foo\n");
}

int add(int a, int b) { return a + b; }

int main(void)
{
    int n = 100;

    int* p = &n;

    p = &n;
    *p = 10; // n의 값을 변경할 때

    void (*fp1)(void) = &foo;
    (*fp1)();

    int (*fp2)(int, int) = &add;
    int result = (*fp2)(10, 20);
    printf("%d\n", result);

    // 함수도 Decay가 있습니다.
    // => 함수의 이름은 함수 포인터로 해석됩니다.
    fp1 = foo; // fp1 = &foo;
    // => 함수 포인터를 참조하지 않고 호출할 수 있습니다.
    fp1(); // (*fp1)();

    fp2 = add;
    result = fp2(10, 20);
    printf("%d\n", result);

    return 0;
}