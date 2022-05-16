// 7_제어문.c
#include <stdio.h>

// 제어문(Control Statement)
// => 조건문 / 반복문
//    if   / while, for, do-while
//    switch
#if 0
int main(void)
{
    int score;
    scanf("%d", &score);

    if (score < 70) {
        printf("탈락\n");
    } else {
        printf("통과\n");
    }

    if (score < 70) {
        printf("탈락\n");
    } else if (score < 80) {
        printf("보류\n");
    } else {
        printf("통과\n");
    }

    return 0;
}
#endif

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        // if (n & 1 == 0) {
        printf("짝\n");
    } else {
        printf("홀\n");
    }

    return 0;
}
