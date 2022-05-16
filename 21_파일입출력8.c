// 21_파일입출력8.c
#include <stdio.h>

#if 0
int main(void)
{
    FILE* fp = fopen("test.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "file open error!\n");
        return 1;
    }

    fprintf(fp, "hello world\n");
    fflush(fp);
    // 강제적으로 버퍼를 비울 수 있습니다.

    int n;
    scanf("%d", &n);

    fclose(fp);

    return 0;
}
#endif

// fseek
// int fseek(FILE *stream, long offset, int whence);
// whence
//   SEEK_SET: 시작
//   SEEK_CUR: 현재 위치
//   SEEK_END: 마지막 위치
// 반환값
//  - 성공 0, 실패 1

int main(void)
{
    FILE* fp = fopen("test.txt", "w+"); // write + read
    if (fp == NULL) {
        fprintf(stderr, "file open error!\n");
        return 1;
    }

    fprintf(fp, "hello\n");
    fseek(fp, -4, SEEK_CUR);

    char buf[32];
    fscanf(fp, "%s", buf);
    printf("buf: %s\n", buf);

    fclose(fp);
    return 0;
}
