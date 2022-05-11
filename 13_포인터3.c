// 13_포인터3.c
#include <stdio.h>

// 1. 포인터의 값이 존재하지 않을 때
// => 0을 통해 값이 존재하지 않음을 표현합니다.
// 2. 0은 정수 타입입니다.
//    포인터 타입에 0을 대입할 수 있지만, 0이 아닌 정수 타입을 대입하는 것은
//    오류 입니다.
//    - 절대하면 안됩니다.
// #define NULL 0

int main(void)
{
    // int* p = 0;
    int* p = NULL;

    printf("%p\n", p);

    // if (p != 0) {
    // if (p != NULL) {
    if (p) {
        *p = 100;
    }

    return 0;
}