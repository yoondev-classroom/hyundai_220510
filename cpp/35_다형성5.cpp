// 35_다형성5.cpp
#include <iostream>
using namespace std;

// 1. virtual 키워드는 부모의 함수가 가상함수면,
//    자식의 함수도 가상함수입니다.
// 2. C++11
//    - override
//    - 부모의 함수를 오버라이딩 하지 않았을 경우,
//      컴파일 오류가 발생합니다.
//    - 가상 함수에 대해서만 오버라이딩이 가능합니다.
//  Effective C++          - *
//  More Effective C++
//  Effective STL
//  Effective Modern C++   - *
//   - 가상 함수가 아닌 함수는 오버라이딩 하면 안됩니다.

class Animal
{
public:
  virtual void Go() { cout << "Animal Go" << endl; }
};

class Dog : public Animal
{
  // Overriding
public:
  // virtual void Go() override { cout << "Dog Go" << endl; }
  void Go() override { cout << "Dog Go" << endl; }
};

int main()
{
  Animal a;
  Dog d;

  Animal *p = &d;
  p->Go();
}

#if 0
int main()
{
  Animal a;
  a.Go();

  Dog d;
  d.Go();
}
#endif