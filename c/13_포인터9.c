// 13_포인터9.c
#include <stdio.h>

// 1. 포인터 타입은 8 바이트(64비트 기준) 입니다.
//  => 64비트 - 8바이트
//     32비트 - 4바이트

#if 0
int main(void)
{
    printf("%lu\n", sizeof(int*));
    printf("%lu\n", sizeof(char*));
    printf("%lu\n", sizeof(double*));
    printf("%lu\n", sizeof(long long*));

    return 0;
}
#endif

int main(void)
{
    // int* pa;
    // int* pb;
    // int* pc;

    // int *pa, pb, pc;
    // pa는 int*
    // pb는 int
    // pc는 int

    int *pa, *pb, *pc;
    int* p1;
}