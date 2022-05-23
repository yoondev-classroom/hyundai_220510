// 36_추상클래스.cpp

#include <iostream>
using namespace std;

// 순수 가상 함수를 가지는 클래스는 "추상 클래스"가 됩니다.
// => 인스턴스화가 불가능합니다.
//    객체 생성이 불가능합니다.
class Shape
{
  int x;
  int y;

public:
  // 1. 부모 입장에서 구현을 제공할 필요가 없고,
  // 2. 자식 클래스은 반드시 Draw를 오버라이딩해야 할 때
  // => 순수 가상 함수(pure virtual function)
  virtual void Draw() = 0;
  virtual ~Shape() {}
};

// 부모가 제공하는 순수 가상 함수를 재정의하지 않으면,
// 추상 클래스가 됩니다.
class Rect : public Shape
{
public:
  // void Draw() { cout << "Rect draw" << endl; }
  // virtual void Draw() { cout << "Rect draw" << endl; }
  // virtual void Draw() override { cout << "Rect draw" << endl; }
  void Draw() override { cout << "Rect draw" << endl; }
};

int main()
{
  // Shape s;
  Rect r;
}