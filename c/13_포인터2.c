// 13_포인터2.c
#include <stdio.h>

// 1. & 연산자를 통해 변수의 주소를 얻을 수 있습니다.
// 2. 포인터 변수를 통해 참조하는 변수의 값을 읽거나 변경할 수 있습니다.
// 포인터 변수 정의
//  int n = 0;
//  int* p = &n;

// 포인터 참조 - 참조 연산!
//  printf("%d\n", *p);
//  *p = 100;

int main(void)
{
    double d = 3.14;

    double* p = &d;
    *p = 100.14;

    printf("%lf\n", *p);
    printf("%lf\n", d);

    return 0;
}