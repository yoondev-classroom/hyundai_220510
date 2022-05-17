// 14_후위반환형식.cpp

#include <iostream>
using namespace std;

#if 0
int (*foo())[2]
{
    static int x[3][2]; // [int[2]][int[2]][int[2]]
    return x; // int (*)[2]
}

int (*(*goo())())[2]
{
    return &foo; // int (*(*)())[2]
}
#endif

// Trailing Return Type
//  => C++11

// 함수를 만드는 방법
// : 반환타입 함수이름(함수 인자...)
// 문제점: 복잡한 반환타입을 표현하기 어렵습니다.

// int add(int a, int b) { return a + b; }
auto add(int a, int b) -> int
{
    return a + b;
}

using PARR2 = int (*)[2];

// auto foo() -> int (*)[2]
auto foo() -> PARR2
{
    static int x[3][2]; // [int[2]][int[2]][int[2]]
    return x; // int (*)[2]
}

// auto goo() -> int (*(*)())[2]
auto goo() -> PARR2 (*)()
{
    return &foo; //  PARR2 (*)()
}

int main()
{
}