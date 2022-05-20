// 34_상속4.cpp
#include <iostream>
using namespace std;

// protected 생성자의 의도
// : 자신의 타입의 객체는 생성할 수 없지만,
//   파생 클래스 타입의 객체는 생성할 수 있다.

class Animal
{
protected:
  Animal() {}
};

class Dog : public Animal
{
public:
  // Dog() : Animal() {}
};

class Cat : public Animal
{
public:
  // Cat() : Animal() {}
};

int main()
{
  int n = 10;
  int *p = &n;
  int &r = *p;
  r = 100;

  cout << n << endl;

  Dog dog;
  Cat cat;

  // Animal a; // error!
}
