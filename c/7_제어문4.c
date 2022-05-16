// 7_반복문4.c
#include <stdio.h>

// for / while
// - break
// - continue: 주의해야 합니다.

int main(void)
{
    // int count = 0;
    // while (count < 10) {
    //     printf("%d\n", count);

    //     if ((count + 1) % 5 == 0) {
    //         continue;
    //     }
    //     ++count;
    // }

    for (int count = 0; count < 10; ++count) {

        if ((count + 1) % 5 == 0) {
            continue;
        }

        printf("%d\n", count);
    }

    return 0;
}