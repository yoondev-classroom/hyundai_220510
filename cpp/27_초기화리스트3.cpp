#include <iostream>
using namespace std;

class Point
{
private:
  int x;
  int y;

public:
  // Point() : x{0}, y{0} { cout << "Point()" << endl; }
  Point(int a, int b) : x{a}, y{b} { cout << "Point(int, int)" << endl; }
};

// 컴파일러가 자동으로 멤버 데이터의 기본 생성자를 통해 초기화합니다.
// > 기본 생성자가 제공되지 않는 멤버 데이터 객체에 대해서는 오류가 발생합니다.
// 결론: 기본 생성자를 제공하지 않는 멤버 객체의 초기화를 위해서
//      초기화 리스트를 사용해야 합니다.

class Rect
{
private:
  Point leftTop;
  Point rightBottom;

public:
  Rect()
      : leftTop{10, 20},
        rightBottom{30, 40}

  {
    cout << "Rect()" << endl;
  }
};

int main()
{
  Rect r;
}
