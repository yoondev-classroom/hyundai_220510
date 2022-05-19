// 29_위임생성자.cpp
#include <iostream>
using namespace std;

// 위임 생성자
// : 다른 생성자를 활요해서 객체를 초기화할 수 있습니다.
// => 생성자 코드의 중복을 제거하는 목적으로 사용할 수 있습니다.
// => C++11
// => 초기화리스트에서만 사용할 수 있습니다.

class Point
{
  int x;
  int y;

public:
#if 1
  Point()
      // : x{0}, y{0} {}
      : Point{0, 0} // 생성자 위임
  {
    cout << "Point()" << endl;
    cout << x << ", " << y << endl;
  }
#endif

#if 0
  Point()
  {
    // Point{0, 0}; - 임시 객체 생성 문법입니다.
    cout << "Point()" << endl;
    cout << x << ", " << y << endl;
  }
#endif

  Point(int a, int b) : x{a}, y{b}
  {
    cout << "Point(int, int)" << endl;
  }
};

#include <string>
class Color
{
public:
  Color(const string &color) {}
};

void SetBackground(const Color &color)
{
}

int main()
{
  Point pt;

  Color c("#ffeeff");
  SetBackground(c);

  SetBackground(Color("#ffeeff"));
  SetBackground(Color{"#ffeeff"});

  // C++에는 임시 객체를 생성하는 문법이 존재합니다.
  //  -> 임시 객체는 rvalue 입니다.
}
