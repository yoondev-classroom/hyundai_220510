// 21_파일입출력.c
#include <stdio.h>

// 표준 입출력 장치
//  - stdin: 표준 입력 장치
//  - stdout: 표준 출력 장치
//     => 라인 버퍼링

//  - stderr: 표준 에러 장치
//     => 버퍼링을 하지 않습니다.

int main(void)
{
    char buf[128];
    scanf("%s", buf);
    printf("%s\n", buf);
    scanf("%s", buf);
    printf("%s\n", buf);
    scanf("%s", buf);
    printf("%s\n", buf);
    scanf("%s", buf);
    printf("%s\n", buf);
    scanf("%s", buf);
    printf("%s\n", buf);

    return 0;
}
