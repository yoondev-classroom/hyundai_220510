// 12_재귀함수2.c
#include <stdio.h>

// factorial
//  3! => 3 * 2 * 1
//  5! => 5 * 4 * 3 * 2 * 1

//  n! => n-1 * n-2 * n-3 ...
// 재귀
int factorial2(int n)
{
    if (n == 1) {
        return 1;
    }

    return n * factorial2(n - 1);
}

// 비재귀
int factorial1(int n)
{
    int s = 1;
    for (int i = 1; i <= n; ++i) {
        s *= i;
    }
    return s;
}

// 피보나치 수열
// n=0 ->0
// n=1 ->1
// n   ->f(n-1) + f(n-2)

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

// 재귀 함수의 장점
// => 코드를 직관적으로 표현할 수 있습니다.
//  - 가독성이 좋은 선언적인 코드를 만들 수 있습니다.
// 문제점
//  1) 같은 코드를 비재귀로 구현하였을 때보다 느리다.
//  2) 메모리 효율성도 떨어집니다.

int main(void)
{
}