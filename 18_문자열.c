// 18_문자열.c
#include <stdio.h>

// 문자타입 - char
// 문자 리터럴 - 'a', 'A', 'b', '0', 'x'
// => ASCII 코드

// 65 => 0x41
//    => 0100 0001

// 1. C 언어에서 문자를 표현하는 방법
//  => ASCII 개념
// 'A': 65 / 'B': 66
// 'a': 97 / 'b': 98 / ... / 'z'
// '0': 48
#if 0
int main(void)
{
    char c = 50;
    printf("%c - %d\n", c, c);

    return 0;
}
#endif

// 2. 소문자를 입력 받았을 경우, 대문자로 변경해서 출력하는 프로그램을 작성하시오

#if 0
int main(void)
{
    char c;
    scanf("%c", &c);

    // c가 소문자인지 판단하는 방법
    // 'a' <= c <= 'z'
    if (c >= 'a' && c <= 'z') {
        printf("소문자 입니다.\n");

        c = c - ('a' - 'A');
    } else if (c >= 'A' && c <= 'Z') {
        printf("대문자 입니다.\n");
        c = c + ('a' - 'A');
    }

    printf("%c\n", c);

    return 0;
}
#endif

#include <ctype.h>
// 소문자인지 판단하고, 대문자인지 판단하고,
// 소문자를 대문자로 변경하고, 대문자를 소문자로 변경하는 함수가 이미 존재합니다.
#if 0
int main(void)
{
    char c;
    scanf("%c", &c);

    if (islower(c)) {
        c = toupper(c);
    } else if (isupper(c)) {
        c = tolower(c);
    }

    printf("%c\n", c);

    return 0;
}
#endif

// 한자리 숫자를 입력하였을 때,
// 정수값으로 변경해서 출력하는 프로그램을 작성하시오
int main(void)
{
    char c;
    scanf("%c", &c);

    if ('0' <= c && c <= '9') {
        int n = c - '0';
        printf("%d\n", n);
    }

    return 0;
}