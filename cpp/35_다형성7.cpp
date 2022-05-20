// 35_다형성7.cpp
#include <iostream>
using namespace std;

// 1. 부모의 포인터를 통해 할당된 객체를 해지하면,
//    자식의 소멸자가 제대로 호출되지 않는 문제가 발생합니다.
//    이유: 소멸자 함수도 정적 바인딩을 하기 때문입니다.
// 2. 가상 소멸자를 통해 소멸자를 동적 바인딩으로 변경할 수 있습니다.
// 3. 부모의 소멸자가 가상 이면, 자식의 소멸자도 가상입니다.

// 핵심: 부모 클래스는 반드시 가상 소멸자를 가져야 합니다.

class Animal
{
public:
  Animal() { cout << "Animal()" << endl; }           // 1
  virtual ~Animal() { cout << "~Animal()" << endl; } // 2
};

class Dog : public Animal
{
public:
  Dog() { cout << "Dog()" << endl; }           // 3
  virtual ~Dog() { cout << "~Dog()" << endl; } // 4
};

int main()
{
  Animal *p = new Dog;

  delete p;
  // 소멸자 호출
  //  Animal::~Animal()
  // 메모리 해지

  // Dog d;
}