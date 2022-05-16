#include <stdio.h>

// stdin
// stdout  => FILE*
// stderr

// printf
// => fprintf(stdout, "...");

// scanf
// => fscanf(stdin, "%d", &n);

// gets - Deprecated
// => fgets(buf, size, stdin);

int main(void)
{
    char buf[10];
    // gets(buf);
    fgets(buf, sizeof(buf), stdin);

    printf("%s\n", buf);

    return 0;
}