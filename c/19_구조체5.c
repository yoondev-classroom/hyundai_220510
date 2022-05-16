// 19_구조체5.c

#include <stdio.h>

typedef struct point {
    int x;
    int y;
} POINT;

struct AAA {
    int a;
    char b;
};

// #pragma pack(1)
// 표준 문법이 아닙니다.
// => 컴파일러 확장 명령

struct BBB {
    char a;
    int b;
    double c;
};
// 구조체 멤버 변수의 크기중 가장 큰 크기의 정렬을 가집니다.
// a___bc => 4 + 4 + 8 => 16

struct CCC {
    int a;
    double b;
    char c;
};
// a____bc_______ => 24

#if 0
int main(void)
{
    printf("%lu\n", sizeof(struct BBB)); // 16
    printf("%lu\n", sizeof(struct CCC)); // ?

    POINT pt1;
    printf("%lu\n", sizeof(POINT)); // 8

    printf("%lu\n", sizeof(struct AAA)); // ?

    return 0;
}
#endif

struct test1 {
    int a;
    double b;
    char c;
    double d;
    char e;
};

int main(void)
{
    printf("%ld\n", sizeof(struct test1));
    return 0;
}