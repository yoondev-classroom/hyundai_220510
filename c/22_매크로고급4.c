#include <stdio.h>

// #define LOG(x) printf(x)
#define DEBUG
// ... / __VA_ARGS__
// => 가변 인자 매크로
#ifdef DEBUG
#define LOG(...) printf(__VA_ARGS__)
#else
#define LOG(...)
#endif

int main(void)
{
    FILE* fp = fopen("a.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    // printf("파일 열기 성공..\n");
    LOG("파일 열기 성공..\n");

    int n = 100;
    LOG("%d %d\n", n, n + 10);

    return 0;
}