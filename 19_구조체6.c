// 19_구조체6.c
#include <stdio.h>
#include <stdlib.h> // malloc, free

typedef struct point {
    int x;
    int y;

    int z[100]; // 400byte
} POINT;

// 문제점
//  - 구조체는 call by value로 동작합니다.
//  - 인자를 전달할 때 복사가 수행됩니다.

// => 구조체는 인자로 전달하거나 결과를 전달 받을 때
//    주소(포인터)를 이용하는 것이 좋습니다.

POINT add1(POINT a, POINT b)
{
    POINT result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

POINT add2(const POINT* pa, const POINT* pb)
{
    POINT result;
    // *. : 연산을 ->를 통해 쉽게 사용할 수 있습니다.
    // result.x = (*pa).x + (*pb).x;
    // result.y = (*pa).y + (*pb).y;
    result.x = pa->x + pb->x;
    result.y = pa->y + pb->y;

    // pa->x = 1000; - error!

    return result;
}

// 결과도 포인터 파라미터를 통해 전달해야 합니다.
// => Out Parameter
void add3(const POINT* pa, const POINT* pb, POINT* result)
{
    result->x = pa->x + pb->x;
    result->y = pa->y + pb->y;
}

// 1) malloc
POINT* add4(const POINT* pa, const POINT* pb)
{
    POINT* result = malloc(sizeof(POINT));
    result->x = pa->x + pb->x;
    result->y = pa->y + pb->y;

    return result;
}
// 2) static
//  => 함수가 정적 메모리(정적 지역 변수 / 전역 변수)에 의존하는 경우, "재진입이 불가능"하다 라고 합니다.
POINT* add5(const POINT* pa, const POINT* pb)
{
    static POINT result;
    result.x = pa->x + pb->x;
    result.y = pa->y + pb->y;

    return &result;
}

int main(void)
{
    printf("%lu\n", sizeof(POINT));

    POINT pt1 = { .x = 10, .y = 20 };
    POINT pt2 = { .x = 100, .y = 200 };

    POINT result;

    result = add1(pt1, pt2);
    result = add2(&pt1, &pt2);
    //-----------------------------------

    add3(&pt1, &pt2, &result);

    POINT* result2 = add4(&pt1, &pt2);
    printf("%d %d\n", result2->x, result2->y);
    free(result2);

    result2 = add5(&pt1, &pt2);
    printf("%d %d\n", result2->x, result2->y);

    printf("%d %d\n", result.x, result.y);

    return 0;
}