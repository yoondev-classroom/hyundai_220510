// 19_구조체2.c
#include <stdio.h>
#include <stdlib.h>

#if 0
struct point {
    int x;
    int y;
};
typedef struct point POINT;
#endif

#if 0
typedef struct point {
    int x;
    int y;
} POINT;
#endif

// 태그명을 생략하는 것도 가능합니다.
typedef struct {
    int x;
    int y;
} POINT;

struct xxx {
    int x;
    int y;
} XXX1, XXX2;

struct {
    int x;
    int y;
} XXX3;

int main(void)
{
    // XXX1 = XXX2;
    XXX1 = XXX2;

    // struct point pt;
    POINT pt;
}

#if 0
// 전역 변수
struct point pt1;

int main(void)
{
    // 지역 변수
    struct point pt2;

    // 동적 메모리 할당
    struct point* pt3 = malloc(sizeof(struct point));
    free(pt3);

    return 0;
}
#endif