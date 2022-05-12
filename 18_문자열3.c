// 18_문자열3.c
#include <stdio.h>
#include <string.h> // strcmp

int main(void)
{
    const char* s1 = "hello";
    const char* s2 = "hello";

    char s3[] = "hello";

    // 동일한 문자열인지 확인하고 싶다.
    // => 문자열을 비교할 때는 주소값이 동일한지 확인하는 것으로는
    //    제대로 비교가 불가능합니다.
    // => 문자열 함수
    //    : strcmp
    //       int strcmp(const char* s1, const char* s2);
    //       - 같은 문자열인 경우 0을 반환합니다.

    //   - #include <string.h>

    // if (s1 == s3) {
    if (strcmp(s1, s2) == 0) {
        printf("같은 문자열입니다.\n");
    } else {
        printf("다른 문자열입니다.\n");
    }

    printf("%d\n", strcmp("abc", "bcd"));
    // 앞의 문자열이 사전순서로 앞에 존재하는 경우
    //  0보다 작은 값이 반환됩니다.

    printf("%d\n", strcmp("bcd", "abc"));
    // 뒤의 문자열이 사전순서로 앞에 존재하는 경우,
    // 0보다 큰 값이 반환됩니다.

    return 0;
}