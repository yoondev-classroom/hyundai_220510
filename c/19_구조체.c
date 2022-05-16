// 19_구조체.c
#include <stdio.h>

// 복소수 2개의 합을 구하는 함수를 만들어봅시다.
// 복소수
//  실수부 / 허수부
#if 0
??? add(int ar, int ai, int br, int bi)
{
    int sr = ar + br;
    int si = ai + bi;

    // return sr, si;
    // => 함수는 하나의 값만 반환할 수 있습니다.
}

int main(void)
{
    int ar = 1, ai = 1; // 1 + 1i
    int br = 2, bi = 2; // 2 + 2i
}
#endif

// 1) 함수의 결과를 반환값을 통해 전달하는 것이 아니라,
//    인자를 통해서 전달한다.
// => Call by reference
//  : Out Parameter
#if 0
void add(int ar, int ai, int br, int bi, int* sr, int* si)
{
    *sr = ar + br;
    *si = ai + bi;

    // return sr, si;
    // => 함수는 하나의 값만 반환할 수 있습니다.
}

int main(void)
{
    int ar = 1, ai = 1; // 1 + 1i
    int br = 2, bi = 2; // 2 + 2i

    int sr, si;
    add(ar, ai, br, bi, &sr, &si);

    printf("%d + %di\n", sr, si);

    return 0;
}
#endif

// 2) 새로운 타입을 설계한다.
//   int, char, double, long  => built-in type
//   struct                   => user defined type(사용자 정의 타입)

// 복소수
struct complex {
    int re;
    int im;
};

struct complex add(struct complex a, struct complex b)
{
    struct complex s = { a.re + b.re, a.im + b.im };
    return s;
}

int main(void)
{
    struct complex a = { 1, 1 };
    struct complex b = { 2, 2 };

    struct complex r = add(a, b);
    printf("%d+%di\n", r.re, r.im);

    return 0;
}
