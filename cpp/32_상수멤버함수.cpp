// 32_상수멤버함수.cpp
#include <iostream>
using namespace std;

class Point
{
  int x = 0;
  int y = 0;

public:
  // 아래 함수를 통해서 멤버 데이터의 값이 변경되지 않습니다.
  void Print() const
  {
    // 멤버 데이터를 수정하지 않겠다.
    // => 멤버 데이터를 상수 취급합니다.
    // x: const int
    // y: const int

    cout << x << ", " << y << endl;
  }
};

// 상수 멤버 함수가 필요한 경우
// 1. 상수 객체를 통해서 멤버 함수를 호출할 때
// 2. const&를 통해서 참조한 객체의 멤버 함수를 호출할 때

void foo(const Point &p)
{
  p.Print();
}

int main()
{
  Point pt1;
  pt1.Print();

  foo(pt1);
}