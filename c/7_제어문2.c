// 7_제어문2.c
// switch
#include <stdio.h>

#if 0
switch (값) {
  case 값1:
  case 값2:
}

#endif

// fallthrough
// 1. break
// 2. default

int main()
{
    int n = 0;
    scanf("%d", &n);

    // 0, 1, 2
    switch (n % 3) {
    case 0:
        printf("0\n");
        break;
    // case 1:
    // case 2:
    default:
        printf("2\n");
        break;
    }
}