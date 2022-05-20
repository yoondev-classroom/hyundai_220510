// 34_상속2.cpp
#include <iostream>
using namespace std;

// 1. 상속하는 방법
//   class ClassName: public ParentClassName

// 2. 자식 클래스는 부모 클래스를 가지고 있지만,
//    부모 클래스의 private 접근 지정자에 접근이 불가능합니다.
//    => protected
//     : 외부에서 접근이 불가능하지만, 자식 클래스는 접근이 가능합니다.
//    => 멤버 데이터를 대상으로 사용하지 않는 것이 좋습니다.

class Base
{
  // protected:
private:
  // int a = 10;
  int b = 20;

protected:
  int GetA() const { return 0; }
  int GetB() const { return b; }
};

class Derived : public Base
{
private:
  int c = 30;

public:
  void Print()
  {
    cout << GetA() << ", " << GetB() << ", " << c << endl;
  }
};

int main()
{
  cout << sizeof(Base) << endl;    // 8
  cout << sizeof(Derived) << endl; // 8

  Derived d;
  d.Print();
}