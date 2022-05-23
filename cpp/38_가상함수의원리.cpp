// 38_가상함수의원리
#include <iostream>
using namespace std;

// 동적 바인딩
// : 컴파일러가 런타임에 타입을 조사하는 코드를 삽입해서,
//   호출한다.

class Animal
{
  double height;

public:
  virtual void Go() { cout << "Animal Go" << endl; }
};

class Dog : public Animal
{
};

// C++에서 가상 함수는 "가상함수테이블"을 통해 구현됩니다.
// 1. 모든 객체의 크기가 가상 함수 테이블을 가르키는 포인터 만큼 늘어납니다.
//    +8byte
// 2. 가상 함수 테이블의 크기는 클래스가 정의한 가상 함수의 개수로 결정됩니다.

int main()
{
  cout << sizeof(Animal) << endl;

  Animal *p = new Dog;
  p->Go();
  // (p->vfptr)[0]();
}