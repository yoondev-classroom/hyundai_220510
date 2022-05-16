#include <errno.h> // errno
#include <stdio.h>

// C 오류 처리
// => 반환값을 통해서 확인합니다.ㄴ

// C언어 표준 입출력 함수가 실패한경우,
// 에러의 원인이 errno(전역변수)를 통해 알 수 있습니다.

// https://devdocs.io

#include <string.h> // strerror

int main(void)
{
    FILE* fp = fopen("aaa.txt", "r");
    if (fp == NULL) {
        // printf("실패: %d\n", errno);
        // printf("실패: %s\n", strerror(errno));
        perror("실패");
        return 1;
    }
}