// 34_상속3.cpp
#include <iostream>
using namespace std;

class Base
{
public:
  Base(int n) { cout << "Base(int)" << endl; }
  ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base
{
public:
  Derived()
      // 1. 컴파일러가 부모의 기본 생성자를 통해 초기화하는 코드를
      //    자동으로 삽입합니다.
      // 2. 부모의 클래스가 기본 생성자를 제공하지 않는다면,
      //    명시적으로 생성자를 호출해야 합니다.
      //    - 초기화 리스트
      // : Base()
      : Base{42}
  {
    cout << "Derived()" << endl;
  }

  ~Derived()
  {
    cout << "~Derived()" << endl;

    // 2. 컴파일러가 자식의 소멸자의 마지막에 부모의
    //    소멸자를 호출합니다.
    // Base::~Base()
  }
};

int main()
{
  Derived d;
  // Dirived::~Derived()

  // Base b;
}