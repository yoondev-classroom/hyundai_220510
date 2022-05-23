\ // 39_연산자오버로딩.cpp
#include <iostream>
    using namespace std;

class Point
{
  int x;
  int y;

public:
  Point(int a, int b) : x{a}, y{b} {}

  void Print() const
  {
    cout << x << ", " << y << endl;
  }

// 1) 멤버 함수 버전
#if 0
  Point operator+(const Point &rhs)
  {
    return Point{x + rhs.x, y + rhs.y};
  }
#endif

  friend Point operator+(const Point &lhs, const Point &rhs);
};

// 2) 일반 함수 버전
// 주의사항: 내부의 멤버 데이터에 접근이 필요하면, friend를 지정해야 합니다.
Point operator+(const Point &lhs, const Point &rhs)
{
  return Point{lhs.x + rhs.x, lhs.y + rhs.y};
}

int main()
{
  int a = 10;
  int b = 20;
  int c = a + b;

  Point p1{10, 20};
  Point p2{30, 40};

  Point p3 = p1 + p2;
  p3.Print();

  // 연산자 오버로딩
  // : 사용자 정의 타입에 대해서 연산자를 사용하였을 경우
  //   약속된 함수가 호출되는 문법
  // Point p3 = p1 + p2;
  // 1) 멤버 함수
  // Point p3 = p1.operator+(p2);
  // 2) 일반 함수
  // Point p3 = operator+(p1, p2);
}