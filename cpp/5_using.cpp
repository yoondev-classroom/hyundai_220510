// 5_using.cpp
#include <iostream>
using namespace std;

// using
// 1. namespace
//  - using 선언:  using std::cout;
//  - using 지시어: using namespace std;

// 2. 기존 타입의 별칭을 만들 수 있습니다. => C++11
//  - Type aliasing
//  - typedef를 대체합니다.
//     1) 직관적이지 않다.
//     2) 템플릿 별칭이 어렵다.

// int[3]

// typedef int ARR3[3];
using ARR3 = int[3];

// typedef int (*PARR3)[3];
using PARR3 = int (*)[3];

int add(int a, int b) { return a + b; }

// typedef int (*FP)(int, int);
using FP = int (*)(int, int);
