
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp = fopen("21_파일입출력10.c", "r");
    if (fp == NULL) {
        fprintf(stderr, "file open error\n");
        exit(1);
    }

    // getchar(): 표준 입출력에서 한글자만 읽습니다.
    // fgetc(fp): 파일로부터 한 글자를 읽습니다.
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        // printf("%c", ch);

        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
#if 0
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
#endif

        putchar(ch);
    }

    fclose(fp);
    return 0;
}