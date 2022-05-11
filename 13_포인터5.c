// 13_포인터5.c
#include <stdio.h>

// 1. 포인터에 + / - 연산을 수행할 수 있습니다.
//    int *p = 100;
//    p + 1  => 100 + (1 * sizeof(int))

int main(void)
{
    int x[5] = { 1, 2, 3, 4, 5 };
    int* p = x; // &x[0]

    // printf("%d\n", *p);
    // printf("%d\n", *(p + 1));
    // printf("%d\n", *(p + 2));
    // printf("%d\n", *(p + 3));
    // printf("%d\n", *(p + 4));

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
    printf("%d\n", p[3]);
    printf("%d\n", p[4]);

    printf("%d\n", *x);
    printf("%d\n", *(x + 1));
    printf("%d\n", *(x + 2));
    printf("%d\n", *(x + 3));
    printf("%d\n", *(x + 4));

    //---------------
    // x[0] / x[1] / x[2]
    // *(x+0) / *(x+1) / *(x+2)

    // (x + 1)  == (1 + x)
    // printf("%d\n", 1[x]);

    return 0;
}