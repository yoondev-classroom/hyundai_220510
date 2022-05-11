// 12_재귀함수.c
// #include <stdio.h>

// 함수 호출의 원리
// => Calling Convention
// => 함수 호출 규약

// https://godbolt.org/

// int add(int a, int b) { return a + b; }
#if 0
void foo()
{
    foo(); // 재귀 함수
}

int main(void)
{
    foo();
    // int result = add(10, 20);
    // return 0;
}
#endif

#include <stdio.h>

// 정의: 함수가 자기 자신을 다시 호출하는 것을 재귀함수라고 합니다.
// => 재귀 함수
//  - 함수가 무한정 중첩될 경우, 스택 오버 플로우가 발생합니다.
//  - 함수가 무한정 중첩되지 않도록, 종료 조건 설정이 필요합니다.
// 장점
//  - 코드를 직관적으로 작성할 수 있습니다.

void print_hello(int n)
{
    // 종료 조건
    if (n <= 0) {
        return;
    }

    printf("hello\n");
    print_hello(n - 1);
}

// print_hello: n=3
// "hello"
// print_hello: n=2
// "hello"
// print_hello: n=1
// "hello"
// print_hello: n=0

int main(void)
{
    print_hello(3);

    return 0;
}
