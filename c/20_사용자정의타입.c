// 20_사용자정의타입.c
#include <stdio.h>

// 사용자 정의 타입
// => struct
//    union
//    enum

// 공용체
// - 멤버 데이터 변수 중 가장 큰 크기를 가지는 것의
//   크기와 동일합니다.
// - 가장 마지막에 대입한 값이 유효합니다.

union job {
    char* school;
    char* company;
};

struct user {
    char* name;
    int age;

    union job job;
};

// int 4 바이트 메모리를 bytes 배열을 통해 분해해서 사용합니다.
union test {
    char bytes[4];
    int n;
};

union AAA {
    int a;
    char b;
    double c;
}; // 8

#if 0
int main(void)
{
    union AAA aaa;
    aaa.c = 3.14;
    // printf("%d\n", aaa.a);
    printf("%lf\n", aaa.c);

    union test t;
    t.n = 0x12345678;

    printf("%x %x %x %x\n",
        t.bytes[0], t.bytes[1], t.bytes[2], t.bytes[3]);

    struct user user;
    user.job.company = "Hyundai";
    printf("%s\n", user.job.company);
    user.job.school = "Seoul";
    printf("%s\n", user.job.school);

    // union AAA aaa;
    printf("%lu\n", sizeof(union AAA));

    return 0;
}
#endif

// 1byte - 8bit
// [3bit - 명령어 종류][2bit - arg1][3bit - arg2]

struct protocol {
    unsigned cmd : 3; // 0 ~ 7
    unsigned arg1 : 2; // 0 ~ 3
    unsigned arg2 : 3; // 0 ~ 7
};

#if 0
union byte {
    char whole;
    struct {
        unsigned b0 : 1;
        unsigned b1 : 1;
        unsigned b2 : 1;
        unsigned b3 : 1;
        unsigned b4 : 1;
        unsigned b5 : 1;
        unsigned b6 : 1;
        unsigned b7 : 1;
    } bit;
};
#endif

struct bit {
    unsigned b0 : 1;
    unsigned b1 : 1;
    unsigned b2 : 1;
    unsigned b3 : 1;
    unsigned b4 : 1;
    unsigned b5 : 1;
    unsigned b6 : 1;
    unsigned b7 : 1;
};

union byte {
    char whole;
    struct bit bit;
};

int main(void)
{
    struct XXX {
        int x;
        int y;
    } point;

    struct XXX point2;

    printf("%lu\n", sizeof(union byte));

    union byte b;
    b.whole = 0x0a;
    // 0000 1010

    printf("%d %d %d %d %d %d %d %d\n",
        b.bit.b0,
        b.bit.b1,
        b.bit.b2,
        b.bit.b3,
        b.bit.b4,
        b.bit.b5,
        b.bit.b6,
        b.bit.b7);
}
