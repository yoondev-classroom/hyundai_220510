// 9_함수.c
#include <stdio.h>

// 함수
// : 입력값을 받아서 주어진 연산을 수행한 후 결과를 반환하는
//   코드의 집합입니다.
// 목적
// 1) 재사용 가능하다.

// > 공통성과 가변성의 분리
//  - 변하는 것과 변하지 않는 것을 분리합니다.
//  => 변하는 것을 인자를 통해 전달받습니다.

void print_array(int* arr, int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }
}

#define ARRAY_LENGTH(arr) sizeof(arr) / sizeof(arr[0])

int main(void)
{
    int arr1[3] = { 1, 2, 3 };
    int arr2[2] = { 10, 20 };

    // print_array(arr1, sizeof(arr1) / sizeof(arr1[0]));
    // print_array(arr2, sizeof(arr2) / sizeof(arr2[0]));

    print_array(arr1, ARRAY_LENGTH(arr1));
    print_array(arr2, ARRAY_LENGTH(arr2));

    // for (int i = 0; i < 3; ++i) {
    //     printf("%d\n", arr1[i]);
    // }

    // for (int i = 0; i < 2; ++i) {
    //     printf("%d\n", arr2[i]);
    // }

    return 0;
}
