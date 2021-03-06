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
// => 복사되는 배열에는 충분한 메모리가 할당되어 있어야 합니다.
#if 1
int main(void)
{
    // int str3[2] = { 1, 2, 3 }; - error!

    char str1[6] = "hello";
    char str2[6];

    // str2 = "hello"; // error!
    strcpy(str2, str1);

    printf("%s\n", str2);

    return 0;
}
#endif

unsigned long xstrlen(const char* str)
{
    // 1. for
    /*
    unsigned long len = 0;
    for (const char* p = str; *p != '\0'; p++) {
        len++;
    }
    return len;
    */

    /*
    const char* p = str;
    while (*p != '\0')
        p++;

    return p - str;
    */

    const char* p = str;
    for (p = str; *p != '\0'; ++p)
        /* Nothing */;

    return p - str;
}

// 5. 문자열 길이
//  size_t strlen(const char* str);
#if 0
int main(void)
{
    char str[32] = "hello";
    printf("%lu\n", xstrlen(str));

    return 0;
}
#endif

int main(void)
{
    char c1 = ' ';
    char c2 = '\n';
    char c3 = '\t';
    char c4 = '\\';

    printf("123%c456", 32);

    char str[]
        = "hello \tworld\n";
    printf("%lu\n", strlen(str));

    return 0;
}