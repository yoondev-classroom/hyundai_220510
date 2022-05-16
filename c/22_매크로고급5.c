// 22_매크로고급5.c
#include <stdio.h>

// #x => 문자열 ""로 바꿔줍니다.
// => 1단계로 사용할 경우, 매크로 상수가 치환되지 않고 사용됩니다.
// #define TOSTR(x) #x
#define _TOSTR(x) #x
#define TOSTR(x) _TOSTR(x)

#define MAX 100

#define PRINT_VALUE(x) \
    printf("%s=%d\n", TOSTR(x), x)

int main(void)
{
    int age = 100;
    printf("%s\n", TOSTR(MAX));

    // printf("%s\n", TOSTR(hello));
    return 0;
}
