#include <iostream>
using namespace std;

#if 0
class Point
{
  int x;
  int y;

public:
  Point(int a, int b) : x{a}, y{b} {}

  // int GetX() const { return x; }
  // int GetY() const { return y; }
  friend ostream &operator<<(ostream &os, const Point &pt);
};

ostream &operator<<(ostream &os, const Point &pt)
{
  // os << pt.GetX() << ", " << pt.GetY();
  os << pt.x << ", " << pt.y;
  return os;
}
#endif

class Point
{
  int x;
  int y;

public:
  Point(int a, int b) : x{a}, y{b} {}

  // friend 함수의 구현을 클래스 내부에 두는 것이 가능합니다.
  friend ostream &operator<<(ostream &os, const Point &pt)
  {
    os << pt.x << ", " << pt.y;
    return os;
  }
};

int main()
{
  Point pt{10, 20};
  cout << pt << endl;
  // 1. 멤버 함수
  // cout.operator<<(pt);

  // 2. 일반 함수 => 내가 만들지 않은 클래스에 연산자 재정의를 추가할 때 일반 함수를 많이 사용합니다.
  // operator<<(cout, pt);
}