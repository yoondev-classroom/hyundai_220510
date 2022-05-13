#include <stdio.h>

// 어떤 함수를 호출할지 컴파일 타임에 결정됩니다.
#if 0
int main(void)
{
    foo();
    // call foo
    goo();
    // call goo

    return 0;
}
#endif

void foo() { printf("foo\n"); }
void goo() { printf("goo\n"); }

// 함수 포인터를 사용하면, 함수 호출을 실행 시간에 결정됩니다.
int main(void)
{
    int n = 0;

    void (*fp)() = NULL;
    if (n > 0) {
        fp = &foo;
    } else {
        fp = &goo;
    }

    (*fp)();
}