// 15_다차원포인터.c
#include <stdio.h>

// ppn -----> pn -------> n [100]

int main(void)
{
    int n = 100;
    int* pn = &n;

    int** ppn = &pn;

    **ppn = 200;
    printf("%d\n", n);

    return 0;
}