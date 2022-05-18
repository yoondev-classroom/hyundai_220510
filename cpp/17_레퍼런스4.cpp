// 17_레퍼런스4.cpp
#include <iostream>
using namespace std;

// C++11에서 새로운 레퍼런스 타입이 도입되었습니다.
// => Rvalue Reference

// 레퍼런스 타입 3가지
// 1. T&:  lvalue reference
//  - lvalue만 참조 가능합니다.

// 2. T&&: rvalue reference - C++11
//  - rvalue만 참조 가능합니다.
//  => move

// 3. const T&: const reference
// - lvalue / rvalue 모두 참조 가능합니다.

// lvalue: =를 기준으로 왼쪽에 올수 있는 것
// rvalue: =를 기준으로 왼쪽에 올수 없는 것

int main()
{
    int n = 100;

    // int& r = 100;
    int&& r = 100;

    const int& r2 = n;
    const int& r3 = 100;
}