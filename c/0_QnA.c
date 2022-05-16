// 배열 / 배열 포인터
// -   배열: 연속된 메모리를 할당할 수 있습니다.
// -  포인터: 변수의 주소를 가지고 있는 타입

#include <stdio.h>

#if 0
int main()
{
    int n = 10;
    printf("%p\n", &n);

    int* p = &n;
    printf("%p\n", p);

    double d = 3.14;
    double* pd = &d;

    return 0;
}
#endif

#if 0
// 배열
// => 길이 정보를 추가적으로 받아야 합니다.
void print(int* x, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\n", x[i]);
}

int main(void)
{
    int x[3] = { 1, 2, 3 }; // int[3]

    // print(x, sizeof(x) / sizeof(int));
    print(x, sizeof(x) / sizeof(x[0]));
    // print(&x[0])

    return 0;
}
#endif

void print(int (*x)[3], int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\n", x[i][j]);
        }
    }
}

// 배열
// - 배열의 이름은 배열의 첫번째 원소의 시작주소로 해석됩니다.
// => Decay
// => 예외
//   1) sizeof
//   2) &
#if 0
int main(void)
{
    int x[2][3] = { { 1, 2, 3 }, { 2, 3, 4 } };
    // x는 몇개짜리 배열인가요?

    // for (int i = 0; i < 2; ++i) {
    //     for (int j = 0; j < 3; ++j) {
    //         printf("%d\n", x[i][j]);
    //     }
    // }

    print(x, sizeof(x) / sizeof(x[0]));
    // print(&x[0]);
    // int(*p)[3];

    return 0;
}
#endif

// void foo(int x[3])
void foo(int* x)
{
    printf("%lu\n", sizeof(x)); // 8
}

#if 0
int main()
{
    int x[3];

    int* p = x; // &x[0]
    int(*p2)[3] = &x; // x: int[3]

    printf("main: %lu\n", sizeof(x)); // 12
    foo(x); // foo(&x[0])
}
#endif

// C / C++
// a.c     -> a.o   ->   a.out / a.exe

// LLVM
// C/C++  -> IL -> a.o -> a.out

// Java
// A.java  -> A.class(ByteCode, IL) <- VM(java.exe / java)
//       compile
// Jython
// JRuby
// Closure
// Kotlin
// Scala

// Mono Project

// C# / A.cs    -> A.obj(IL) <- CLR
// C++
// VB
// F#

// Write Once, Run Anywhere
//------------------

// 1. sizeof
// 2. 9
// 3. 다음 중 짝수/홀수를 판단할 때 사용하는 연산자는?
//  => %, &
// 4. n이 3일때 아래 코드의 실행후에 n의 값은 얼마 일까요 ?
//  if ( n == 3 || ++n == 4) {}

// 반복문
//  - break    => 현재의 루프를 빠져나간다.
//  - continue => 루프의 시작으로 돌아간다.
//  - return   => 함수를 반환한다.
//  - goto

#if 0
int main(void)
{
    // 홀수인지 판단하고 싶다.
    int n;
    scanf("%d", &n);

    // % 연산의 결과는 왼쪽 피연산자의 부호와 같은 결과가 나옵니다.
    //  1 % 2 ==> 1
    // -1 % 2 ==> -1
    // if (n % 2 == 1) {

    // if ((n & 1) == 1) {
    if (n % 2) {
        printf("홀수\n");
    } else {
        printf("짝수\n");
    }

    return 0;
}
#endif

#if 0
int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0) {
        goto foo;
    }

    printf("goo\n");
    printf("goo\n");
    printf("goo\n");

foo:
    printf("foo\n");
    printf("foo\n");
    printf("foo\n");

    return 0;
}
#endif

// goto
// => 중첩된 반복문을 탈출하는 용도로 유용합니다.
int main(void)
{
    int x[3][3] = {
        { 1, 2, 3 },
        { 10, -10, 30 },
        { 100, 200, 300 },
    };

#if 0
    int flag = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (x[i][j] < 0) {
                flag = 1;
                break;
            }

            printf("%d\n", x[i][j]);
        }

        if (flag)
            break;
    }
#endif

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (x[i][j] < 0) {
                goto done;
            }

            printf("%d\n", x[i][j]);
        }
    }
done:
    return 0;
}
