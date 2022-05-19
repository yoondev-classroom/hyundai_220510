// 28_복사생성자2.cpp
#include <iostream>
using namespace std;

class Point
{
public:
  // 변환 생성자
  // - 암묵적인 변환을 허용하지 않는 것이 좋습니다.
  // explicit Point(int) { cout << "Point(int)" << endl; }

  Point() { cout << "Point()" << endl; }
  ~Point() { cout << "~Point()" << endl; }

  Point(const Point &rhs) { cout << "Point(const Point&)" << endl; }
};

// 복사 생성자가 호출되는 경우
// 3. 함수가 객체를 값으로 반환할 때
Point pt;

// foo() -> 임시 객체(복사 + 파괴)
// - 참조로 반환할 때는 지역 객체가 아니어야 합니다.
Point &foo()
{
  return pt;
}

int main()
{
  foo();
}

// 2. 함수의 인자로 객체가 전달될 때
// void foo(Point p)
// - Point(const Point&)
// - ~Point()
#if 0
void foo(const Point &p)
{
}

int main()
{
  Point p;
  foo(p);
}
#endif

// 1. 객체를 만들 때 자신의 타입으로 초기화하는 경우
#if 0
void foo(Point p)
{
}

int main()
{
  Point x1(10);
  // Point x2 = 10;
  // foo(10);

  Point p1;

  // Direct Initialization
  Point p3(p1);
  Point p5{p1};

  // Copy Initialization
  Point p2 = p1;
  Point p4 = {p1};
}
#endif