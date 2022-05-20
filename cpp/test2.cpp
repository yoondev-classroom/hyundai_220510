// test2.cpp
#if 0
#include <iostream>
using namespace std;

#include "test.h"

extern int a;
// 외부에 있는 전역 변수를 참조하겠다. 선언!

void foo()
{
  cout << a << endl;
}
#endif

const int n = 100;
// C++의 const 전역 변수는
// internal linkage를 갖습니다.