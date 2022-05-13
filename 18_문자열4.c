// 18_문자열4.c
#include <stdio.h>
#include <string.h>

// 1. 문자 타입
//  - char(1바이트)
//    0 ~ 127: ASCII 코드
//  => A: 65
//     a: 97
//     0: 48
// 2. 문자열 타입
//  - char 배열이지만 마지막 원소가 '\0'입니다.
// 3. 문자열 함수 - string.h
//  - 비교: strcmp
#if 0
int main(void)
{
    char str1[] = "hello";
    const char* str2 = "hello";

    printf("%lu\n", sizeof(str1)); // 6
    printf("%lu\n", sizeof(str2)); // 8

    // if (str1 == str2)
    //  - str1의 주소와 str2의 주소를 비교하고 있습니다.
    // => 문자열의 내용이 동일해도, 주소는 다를 수 있습니다.
    if (strcmp(str1, str2) == 0) {
        printf("동일한 문자열입니다.\n");
    }

    return 0;
}
#endif

#if 0
int main(void)
{
    char str1[6] = "hello";
    // char str2[6] = str1;

    int a[3] = { 1, 2, 3 };
    // int b[3] = a;
    int b[3];

    for (int i = 0; i < 3; i++) {
        b[i] = a[i];
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}
#endif

// 4. 문자열 복사 함수 - strcpy
// char* strcpy(char* destination, const char* source);
#if 0
int main(void)
{
    char str1[6] = "hello";
    char str2[6];

    strcpy(str2, str1);

    printf("%s\n", str2);

    return 0;
}
#endif

// 5. 문자열 길이
//  size_t strlen(const char* str);
int main(void)
{
    char str[32] = "hello";
    printf("%lu\n", strlen(str));

    return 0;
}