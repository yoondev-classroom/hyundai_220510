// 31_static2.cpp
#include <iostream>
using namespace std;

class Car
{
  // 정적 멤버 데이터
  // : 객체를 생성하지 않아도 접근이 가능합니다.
  static int cnt;

  int n;

public:
  // 멤버 함수
  // => 객체를 생성해야지만 호출이 가능합니다.
  void foo() {}

  // 정적 멤버 함수
  // => 객체를 생성하지 않아도 호출이 가능합니다.
  // => this가 전달되지 않습니다.
  // 사용하는 방법
  // 1) 클래스
  // 2) 객체
  static int GetCount()
  {
    // this - 사용이 불가능합니다.

    // n = 100;
    // this->n = 100; - error!

    return cnt;
  }
};

int Car::cnt = 100;

int main()
{
  cout << Car::GetCount() << endl;

  Car c1;
  cout << c1.GetCount() << endl;
}