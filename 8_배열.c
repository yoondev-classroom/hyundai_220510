// 8_배열.c
#include <stdio.h>

// 1. 배열: 동일한 타입의 변수를 연속적으로 할당합니다.
// => 하나의 이름으로 인덱스를 통해 해당 메모리에 접근이 가능합니다.

/*
int main(void)
{
    int n; // 4byte
    int arr[5]; // int[5], 20byte

    arr[0] = 10;
    arr[4] = 20;

    // arr[5] = 10000; - 미정의 동작 발생 가능성이 있습니다.

    return 0;
}
*/

// 2. 배열의 초기화
int main(void)
{
    int x1[5]; // 쓰레기값

    // if (10) {
    // }

    // int x2[5] = { 1, 2, 3, 4, 5 };
    int x2[5] = {
        1,
        2,
        3,
        4,
        5,
    };

    int x3[5] = {
        0,
    };

    return 0;
}