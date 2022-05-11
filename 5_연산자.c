// 5_연산자.c
#include <stdio.h>

// 1. ++, --
// 2. 논리 연산자 => 연산의 결과가 참일 경우, 1
//                연산의 결과가 거짓일 경우, 0
//  참: 0이 아닌 값, Non Zero
//  거짓: 0
// => C99, bool 타입이 도입되었습니다.

//    &&
//    ||
//  => 단일 회로 성질
//     exp1 && exp2
//     - exp1이 거짓이면 exp2를 수행하지 않습니다.
//     exp1 || exp2
//     - exp1이 참이면, exp2를 수행하지 않습니다.
// 3. &&와 ||의 우선순위가 다릅니다.
//   => 우선순위는 결합을 결정합니다.

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    int d = ++a || (++b && ++c);
    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}

#if 0
int main(void)
{
    int n = 1;
    // => 하나의 식에서 동일한 변수에 두 번 이상의 부수효과가 발생하는 것은 미정의 동작입니다.
    // int x = ++n + ++n;
    // printf("%d\n", x);

    return 0;
}
#endif