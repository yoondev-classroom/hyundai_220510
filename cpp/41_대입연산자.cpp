#include <iostream>
using namespace std;

// 1. 아무것도 하지 않는 기본 생성자
// 2. 아무것도 하지 않는 소멸자
// 3. 멤버(얕은) 복사를 수행하는 복사 생성자
// 4. 멤버(얕은) 복사를 수행하는 대입 연산자를 만들어줍니다.

//  복사의 정책을 결정하는 2개의 함수
// 1) 복사 생성자
// 2) 대입 연산자
// => 복사 생성자를 제공하면, 반드시 대입 연산자도 제공해야 합니다.
//    대입 연산자를 제공하면, 반드시 복사 생성자도 제공해야 합니다.

class Point
{
  int x;
  int y;

public:
  Point(int a, int b) : x{a}, y{b} {}
  Point(const Point &rhs)
  {
    cout << "Point(const Point& rhs)" << endl;
  }

  // 멤버 함수를 통해서만 제공할 수 있는 연산자 오버로딩입니다.
  Point &operator=(const Point &rhs)
  {
    cout << "operator=(const Point& rhs)" << endl;
    x = rhs.x;
    y = rhs.y;
    return *this;
  }
};

int main()
{
  Point pt1{10, 20};
  Point pt2{pt1}; // pt2 = pt1;

  int a = 10, b = 20, c = 30;
  a = b = c;

  pt2 = pt1; // 대입 연산자가 호출됩니다.
  pt2 = pt1 = pt2;
  // pt2.operator=(pt1).operator=(pt2)
}
