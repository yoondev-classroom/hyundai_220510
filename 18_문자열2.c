
#include <stdio.h>

// 1. 문자열은 char 배열을 통해 표현합니다.
//  => 마지막 요소가 0으로 끝나는 char 배열입니다.

// int *p = NULL;
// char c = '\0';

void print(int* x)
{
    while (*x) {
        printf("%d\n", *x);
        x++;
    }
}

#if 0
int main(void)
{
    int x[4] = { 1, 2, 3, 0 };
    // print(x, 3);
    print(x);

    // 문자열 타입
    char str[6] = {
        'h',
        'e',
        'l',
        'l',
        'o',
        '\0',
    };

    // printf의 %s 서식을 통해 출력할 수 있습니다.
    printf("%s\n", str);

    return 0;
}
#endif

#if 0
int main(void)
{
    char str[5] = {
        'h',
        'e',
        'l',
        'l',
        'o'
    };
    //            'h','e','l','l','o'

    printf("%s\n", str);
    // 문자열의 끝을 인식할 수 없기 때문에, 미정의 동작이 발생할 가능성이 있습니다.
    return 0;
}
#endif

// 2. 문자열 타입은 널 문자로 종료되는 char 배열입니다.
// 3. 문자열을 다루는 방법 2가지
//   1) char str[] = "hello";
//   2) const char* str2 = "hello";

#if 0
int main(void)
{
    char str[] = "hello";
    // char str[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };

    str[0] = 'x';
    printf("%s\n", str);

    const char* str2 = "hello";
    str2[0] = 'x';
    // 텍스트 영역에 대한 수정은 미정의 동작입니다.

    printf("%s\n", str2);

    return 0;
}
#endif
#if 0
int main(void)
{
    const int n = 10;
    // n의 값을 변경할 수 없습니다.

    const int* p = &n;
    // *p = 100;
    printf("%d\n", *p);

    // int* p = &n;
    // * 앞에 const가 있는 경우:
    //  => 포인터가 가르키는 대상체를 변경할 수 없습니다.

    // * 뒤에 const가 있는 경우:
    //  => 포인터 변수를 다른 주소값으로 변경할 수 없습니다.

    const int* p2 = &n;
    int* const p3 = &n;
    int const* p4 = &n;
    const int* const p5 = &n;
    int const* const p6 = &n;

    return 0;
}
#endif

#if 0
int main(void)
{
    int a = 10;
    int b = 20;

    // const int* pa = &a;
    // *pa = 200; // error!

    int* const pa = &a;
    *pa = 200; // ok!
    pa = &b; // error!

    int n = 100;

    const int* p2 = &n;
    int* const p3 = &n;
    int const* p4 = &n;
    const int* const p5 = &n;
    int const* const p6 = &n;

    return 0;
}
#endif

// 포인터를 통해 변경되지 않는 값에 대해서는
// const를 지정하는 것이 좋습니다.
// 1) 의도를 전달할 수 있다.
//  - 포인터를 통해 값을 변경하는 것이 아니라 읽기 전용으로 사용하겠다.
// 2) 실수를 컴파일 타임에 확인할 수 있다.
void print_arr(const int* arr, int n)
{
    // ...
}

int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    print_arr(arr, 5);

    return 0;
}