// 19_구조체4.c
#include <stdio.h>

typedef struct point {
    int x;
    int y;
} POINT;

POINT add(POINT a, POINT b)
{
    POINT result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}

int main(void)
{
    // struct point pt1 = { .x = 10, .y = 20 };
    POINT pt1 = { .x = 10, .y = 20 };
    POINT pt2 = { .x = 100, .y = 200 };

    POINT result = add(pt1, pt2);
    printf("%d %d\n", result.x, result.y);

    return 0;
}
