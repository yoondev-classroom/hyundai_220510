// 14_배열과포인터

#include <stdio.h>

// * 배열 포인터
//  - 배열을 가르키는 포인터 타입
// * 포인터 배열
//  - 하나의 원소타입이 포인터 타입인 배열

void print_array(int (*arr)[3], int n)
{
    // int* -> * -> int
    // double* -> * -> double
    // int(*)[3] -> * -> int[3]

    int n2 = sizeof(*arr) / sizeof((*arr)[0]);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n2; ++j) {
            printf("%d\n", arr[i][j]);
        }
    }
}

int main(void)
{
    // [ int[3] ][ int[3] ]
    int x[2][3] = {
        { 1, 2, 3 },
        { 10, 20, 30 },
    };

    // for (int i = 0; i < 2; ++i) {
    //     for (int j = 0; j < 3; ++j) {
    //         printf("%d\n", x[i][j]);
    //     }
    // }

    print_array(x, 2);
    // print_array(&x[0], 2);

    // int* p[3];   // [int*][int*][int*]
    // int(*p)[3]; // * ---> int[3]

    return 0;
}