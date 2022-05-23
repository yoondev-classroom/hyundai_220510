// 42_함수객체.cpp
#include <iostream>
using namespace std;

// 정의: 객체 인데 "함수 호출 연산자"를 재정의한 것 입니다.
// 1) 반드시 멤버 함수를 통해서 재정의 해야 합니다.
// 2) 반환 타입과 인자 정보를 자유롭게 작성 할 수 있습니다.

//  => Functor
int add(int a, int b) { return a + b; }

class Adder
{
public:
  int operator()(int a, int b) const { return a + b; }
};

int main()
{
  Adder add2;
  cout << add2(10, 20) << endl;
  // add2.operator()(10, 20)

  // cout << add(10, 20) << endl;
}