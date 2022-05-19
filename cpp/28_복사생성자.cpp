// 28_복사.cpp
#include <iostream>
using namespace std;

// 1. 사용자가 생성자를 아무것도 제공하지 않으면,
//    컴파일러는 아무일도 하지 않는 기본 생성자를 만들어 줍니다.
// 2. 사용자가 복사 생성자를 제공하지 않으면,
//    컴파일러는 자동으로 멤버 데이터를 복사하는 생성자를 만들어 줍니다.
// 3. 사용자가 복사 생성자만 제공하면, 컴파일러는 기본 생성자를 만들어주지 않습니다.
//   이유: 복사 생성자도 생성자이기 때문에...

class Point
{
  int x;
  int y;

public:
  //---------------------
  // - 복사 생성자
  //  => 자신과 동일한 타입의 객체를 복사할 때 호출됩니다.
  Point(const Point &rhs)
      : x{rhs.x}, y{rhs.y}
  {
    cout << "Point(const Point&)" << endl;
  }

  //---------------------
  Point(int a, int b)
      : x{a}, y{b} {}

  void Print() { cout << x << ", " << y << endl; }
};

class AAA
{
  int a = 10;
  int b = 20;
  // 기본 생성자
  // 복사 생성자
};

int main()
{
  AAA aaa;
  AAA bbb{aaa};
  AAA ccc = aaa;

  Point p1{10, 20}; // Point(int, int)

  // 복사 생성자가 호출되는 경우
  Point p2 = p1;
  Point p3(p1);
  Point p4 = {p1};
  Point p5{p1};
}
