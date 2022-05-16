// 21_파일입출력2.c
#include <stdio.h>

// 일반 파일
//  - fopen(파일 이름(경로), 모드);
//    : FILE* 를 반환합니다.
//    > 오류 처리가 반드시 필요합니다.
//    Mode
//     - "r": read
//       - 열고자 하는 파일이 존재하지 않는 경우, NULL을 반환합니다.

//     - "w": write
//       - 열고자 하는 파일이 존재하지 않는 경우, 새로운 파일을 생성합니다.
//       - 열고자 하는 파일이 존재하는 경우, 파일의 크기를 0으로 만들어줍니다.

//     - "a": write: 파일의 마지막부터 쓸 수 있습니다.

//  - fclose

#if 0
typedef struct _file {
    // ...
} FILE;
#endif

int main(void)
{
#if 0
    FILE* fp = fopen("a.txt", "w");
    if (fp != NULL) {
        // ...
    } else {
      fprintf(stderr, "파일이 여는데 실패하였습니다.\n");
      return 1;
    }
#endif

#if 1
    FILE* fp = fopen("a.txt", "w");
    // FILE* fp = stdout;
    if (fp == NULL) {
        fprintf(stderr, "파일이 여는데 실패하였습니다.\n");
        return 1;
    }
    // fprintf(FILE*, ...);

    fprintf(fp, "hello, world\n");
    int n = 10;
    fprintf(fp, "n = %d\n", n);
#endif

    return 0;
}