// 13_포인터8.c
#include <stdio.h>

// 10   11   12  13   14
// |----|----|----|----|----|----|----|----|
//   78   56   34   12   00   00   00   00
//   p    p+1  p+2  p+3
int main(void)
{
    int n = 0x12345678;
    // char n[4] = { 0x78, 0x56, 0x34, 0x12 };

    // int* p = &n;
    char* p = (char*)&n;

    // printf("%x\n", *(p + 0));
    printf("%x\n", p[0]);
    printf("%x\n", p[1]);
    printf("%x\n", p[2]);
    printf("%x\n", p[3]);

    /*
    printf("%x\n", *p);
    p++;
    printf("%x\n", *p);
    p++;
    printf("%x\n", *p);
    p++;
    printf("%x\n", *p);
    */

    return 0;
}