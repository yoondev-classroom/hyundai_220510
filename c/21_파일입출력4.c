#include <stdio.h>

#if 0
int main(void)
{
    FILE* fp = fopen("a.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "file open error\n");
        return 1;
    }

    // EOF: End of File

    char buf[128];

    while (fscanf(fp, "%s", buf) != EOF) {
        printf("buf = %s\n", buf);
    }

    fclose(fp);
    return 0;
}
#endif

// Ctrl + D: Linux
// Ctrl + Z: Windows
// => 키보드로 EOF를 전달하는 방법

int main(void)
{
    char buf[128];

    while (fscanf(stdin, "%s", buf) != EOF) {
        printf("buf = %s\n", buf);
    }

    return 0;
}