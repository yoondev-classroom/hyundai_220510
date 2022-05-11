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

#if 1
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

int main()
{
    int x[3];

    int* p = x; // &x[0]
    int(*p2)[3] = &x; // x: int[3]

    printf("main: %lu\n", sizeof(x)); // 12
    foo(x); // foo(&x[0])
}


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