// 13_포인터4.c
#include <stdio.h>

void swap(int* pa, int* pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(void)
{
    int a = 10;
    int b = 20;
    // a와 b의 값을 교환(swap)하고 싶습니다.
    // => 임시 변수가 필요합니다.
    // int temp = a;
    // a = b;
    // b = temp;

    swap(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}