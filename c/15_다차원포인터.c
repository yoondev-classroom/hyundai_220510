// 15_다차원포인터.c
#include <stdio.h>

// ppn -----> pn -------> n [100]
#if 0
int main(void)
{
    int n = 100;
    int* pn = &n;

    int** ppn = &pn;

    **ppn = 200;
    printf("%d\n", n);

    return 0;
}
#endif

void pswap(int** ppa, int** ppb)
{
    int* temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}

int main(void)
{
    int a = 10;
    int b = 20;

    int* pa = &a;
    int* pb = &b;
    pswap(&pa, &pb);

    printf("%d %d\n", a, b); // 10, 20
    printf("%d %d\n", *pa, *pb);
}