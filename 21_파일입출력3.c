// 21_파일입출력3.c
#include <stdio.h>

int main(void)
{
    int n;
    // scanf("%d", &n);
    FILE* fp = fopen("a.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    fscanf(fp, "%d", &n);
    printf("n = %d\n", n);

    return 0;
}