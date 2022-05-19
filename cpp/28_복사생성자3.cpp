// 28_복사생성자3.cpp
#include <iostream>
using namespace std;

class Point
{
public:
  Point(int a, int b) { cout << "Point()" << endl; }
  ~Point() { cout << "~Point()" << endl; }

  Point(const Point &rhs) { cout << "Point(const Point&)" << endl; }
};

// 지역 객체를 반환할 때는 반드시 아래와 같이 작성해야 합니다.
// => C++ Compiler
//   RVO(Return Value Optimization)
//   : 지역 객체를 값으로 반환할 때, 임시 객체의 비용을 제거하는 최적화가
//     가능합니다.
//  + NRVO(Named Return Value Optimization)
//  - 지역 객체를 생성하면서 반환하는 것이 아니라,
//    이름을 가지고 있어도 임시 객체의 비용을 제거하는 최적화가 가능합니다.

Point foo()
{
  // return Point{10, 20};

  Point pt{10, 20};
  // ...
  return pt;
}

int main()
{
  foo();
}