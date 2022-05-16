#include <stdio.h>

// #define DEBUG
// > 컴파일 할때 정의할 수 있습니다.
// gcc source.c
// gcc source.c -D DEBUG

#ifdef DEBUG
#define LOG(x) printf(x)
#else
#define LOG(x)
#endif

int main(void)
{
    FILE* fp = fopen("a.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    // printf("파일 열기 성공..\n");
    LOG("파일 열기 성공..\n");

    return 0;
}