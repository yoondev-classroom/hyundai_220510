// 19_구조체3.c

#include <stdio.h>

// 구조체 태그명: point
//  구조체 타입: struct point
typedef struct point {
    // 구조체 멤버 변수
    int x;
    int y;
} POINT;

int main(void)
{
    // POINT pt1 = { 10, 20 };
    // C99 - 멤버 지정 초기화
    // POINT pt1 = { .x = 10, .y = 20 };
    POINT pt1 = {
        0,
    };

    int a = 10;
    int b = 20;
    POINT pt2 = {
        .x = a + b,
        .y = 30 + 40,
    };

    printf("%d %d\n", pt1.x, pt1.y);

    return 0;
}

#if 0
int main(void)
{
    POINT pt1;
    // .(dot) 연산자: 구조체 멤버 변수에 접근이 가능합니다.
    pt1.x = 10;
    pt1.y = 20;

    printf("%d %d\n", pt1.x, pt1.y);

    return 0;
}
#endif