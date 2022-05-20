// 31_static3.cpp

#include <iostream>
using namespace std;

class Test
{
  int n1;
  static int n2;

public:
  // 일반 멤버 함수에서
  // 멤버 데이터에 접근도 가능하고,
  // 정적 멤버 데이터/함수에 대한 접근도 가능하다.
  void foo(/* this */)
  {
    n1 = 100;
    // this->n1 = 100; - ok!
    n2 = 200; // ok!
  }

  // 정적 멤버 함수에서
  // 객체의 주소가 전달되지 않기 때문에
  // - this가 없기 때문에 멤버 데이터 변수에 접근이
  //   불가능하고, 멤버 함수 호출도 불가능합니다.
  // - 정적 멤버 데이터에 접근과 정적 멤버 함수 호출이
  //   가능합니다.
  static void goo()
  {
    // n1 = 100;
    // this->n1 = 100;  - error!

    // foo();
    // this->foo();     - error!
    // foo(this);

    n2 = 100;
  }

  // 아래만 허용됩니다.
  // static constexpr int n2 = 0;
};

int Test::n2 = 0;

int main()
{
}