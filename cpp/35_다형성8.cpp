// 35_다형성8.cpp
#include <iostream>
#include <vector>
using namespace std;

// 1. 각 도형의 클래스를 설계합니다.
// 2. 부모 클래스를 도입합니다.
// => 하나의 컨테이너에 모든 도형을 보관할 수 있습니다.
// => 연관된 클래스를 묶어서 관리할 수 있습니다.
//  "동종을 보관하는 컨테이너"
// 3. 자식 클래스의 공통의 기능을 부모 클래스의 포인터 타입을 통해 이용하기 위해서는
//    반드시 해당 기능이 부모를 통해서 제공되어야 한다.
// => 자식의 공통의 기능은 부모로부터 비롯되어야 한다.
// 4. 자식이 재정의하는 모든 함수는 "가상함수"이어야 한다.

// 5. 부모 클래스의 소멸자는 반드시 가상이어야 합니다.
// => 메모리 누수가 발생할 위험성이 있습니다.

// 6. OCP(Open Close Principle)
//  : 개방 폐쇄 원칙
//  확장에는 열려있고, 수정에는 닫혀 있어야 한다.
//  "새로운 기능이 추가되어도, 기존 코드는 수정되지 않는 것이 좋다."
// => 다형성은 OCP를 만족합니다.
//    Replace type code with Polymorphism

class Shape
{
public:
  virtual void Draw() { cout << "Shape Draw" << endl; }
  virtual ~Shape() {}
};

class Circle : public Shape
{
public:
  void Draw() override { cout << "Circle Draw" << endl; }
};

class Rect : public Shape
{
public:
  void Draw() override { cout << "Rect Draw" << endl; }
};

//----
class Triangle : public Shape
{
public:
  void Draw() override { cout << "Triangle Draw" << endl; }
};

int main()
{
  vector<Shape *> shapes;

  int cmd;
  while (1)
  {
    cin >> cmd;
    if (cmd == 1)
    {
      shapes.push_back(new Rect);
    }
    else if (cmd == 2)
    {
      shapes.push_back(new Circle);
    }
    else if (cmd == 3)
    {
      shapes.push_back(new Triangle);
    }
    else if (cmd == 0)
    {
      for (auto e : shapes)
      {
        delete e;
      }
      shapes.resize(0);
    }
    else if (cmd == 9)
    {
      for (Shape *e : shapes)
      {
        e->Draw();
      }
    }
  }
}