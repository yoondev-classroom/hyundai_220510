#include <stdio.h>
#include <string.h>
// strcmp
// strcpy
// => 복사하는 대상의 메모리가 충분히 할당되어야 합니다.
// strlen
// strcat
// => 두개의 문자열을 합쳐서 하나의 문자열로 만들어줍니다.

// char	*strcat(char *dest, const char *src);
// 주의사항: dest에 충분한 공간이 존재해야 합니다.
#if 0
int main(void)
{
    char str1[] = "hello";
    char str2[32] = "world";

    printf("%s\n", str2);
    strcat(str2, str1);
    printf("%s\n", str2);

    return 0;
}
#endif
#include <stdlib.h>

#if 0
int main(void)
{
    const char* str1 = " world";
    const char* str2 = "hello";

    // 1. 동적 메모리 할당
    // - calloc은 할당한 메모리를 0으로 초기화해줍니다.
    char* p = malloc(strlen(str1) + strlen(str2) + 1);

    // 2. str2 복사 - strcpy
    strcpy(p, str2);

    // 3. str1 연결 - strcat
    strcat(p, str1);

    printf("%s\n", p);
    free(p);

    return 0;
}
#endif

char* strdup(const char* s);
// 1. malloc
//  주의> free를 해야 한다.
#if 0
int main(void)
{
    const char* s = "hello";

    // char str[1000] = s;
    // => 문자열 초기화는 문자열 리터럴("hello")를 통해서만
    //    가능합니다.

    // s는 수정 불가능한 메모리입니다.
    // 수정하기 위해서는 s의 문자열의 크기 만큼 메모리를 할당해서
    // 수정해야 합니다.
    // char* p = malloc(strlen(s) + 1);
    // strcpy(p, s);
    // - string.h에 strdup 함수가 있습니다.
    char* p = strdup(s);

    p[0] = 'X';
    printf("%s\n", p);

    free(p);
    return 0;
}
#endif

// 2. strtok는 정적 지역 변수 / 전역 변수로 만들어져 있습니다.
//  - 스레드 안전성이 없습니다.
#if 0
int main(void)
{
    char s[] = "hello world show me the money";

// 공백을 기준으로 토큰을 분리하고 싶을 때
// => strtok
#if 0
    char* p = strtok(s, " ");
    printf("%s\n", p);

    p = strtok(NULL, " ");
    printf("%s\n", p);
#endif
    char* p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}
#endif

int main(void)
{
    // char s1[100] = "hello";
    const char* s1 = "hello";
    const char* s2 = " world";

    // strcat(s1, s2);
    char* s = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(s, s1); // "hello"
    strcat(s, s2); // "hello world"

    printf("%s\n", s1);

    return 0;
}