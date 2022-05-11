// 8_배열2.c
#include <stdio.h>

// 1. 배열의 길이를 구하는 방법
//  - sizeof(arr) / sizeof(arr[0])
#if 0
int main(void)
{
    int arr[2][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
    };
    // [ int[3] ][ int[3] ]

    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);

    return 0;
}
#endif

// 2. 배열의 크기는 컴파일 타임에 결정되어야 합니다.
// => GCC에서는 허용됩니다.
//    MSVC에서는 허용되지 않습니다.
#if 0
int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("%lu\n", sizeof(arr));

    return 0;
}
#endif

// 3. 배열의 이름은 배열의 첫번째 원소의 시작주소로 해석됩니다.
//  => Decay
//  int arr[3];
//   - decay O: arr -> &arr[0] -> int*
//   - decay X: arr -> int[3]

//   예외: 정확한 배열 타입으로 해석됩니다.
//    1. sizeof
//    2. &
#if 0
int main(void)
{
    int arr[3];

    printf("%p\n", arr); // int*
    printf("%p\n", &arr[0]);

    printf("%p\n", &arr); // int(*)[3]

    return 0;
}
#endif

#if 1
int main()
{
    int n = 0x12345678;

    int* p1 = &n;
    char* p2 = (char*)&n;

    printf("%p\n", p1);
    printf("%p\n", p2);

    printf("%x %x %x %x\n",
        p2[0], p2[1], p2[2], p2[3]);

    // 0x12345678
    // 78 56 34 12 - Little Endian
    // 12 34 56 78 - Big Endian - *

    return 0;
}
#endif

int main(void)
{
    int arr[3] = { 10, 20, 30 };

    int* p1 = arr; // &arr[0]
    printf("%lu\n", sizeof(*p1)); // int

    int(*p2)[3] = &arr;
    printf("%lu\n", sizeof(*p2)); // int[3]

    return 0;
}