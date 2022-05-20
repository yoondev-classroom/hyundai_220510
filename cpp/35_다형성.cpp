// 35_다형성.cpp
#include <iostream>
using namespace std;

// 1. 상속
//    C++: public 상속을 의미합니다.

// 2. 상속 - is a
//    자식 클래스 is a 부모 클래스
//    - Cat is a Animal
//    Cat ---------------> Animal
//     : UML(Unified Modeling Language)

// 동물이 가져야 하는 공통적인 속성(상태+행위)을 설계합니다.
class Animal
{
};

class Cat : public Animal
{
};

// 3.

int main()
{
  Animal a;
  Cat c;

  Animal *pa = &a;
  Cat *pc = &c;

  // - 부모의 포인터 타입을 통해 자식 객체의 주소를 가질 수 있습니다.
  // - 자식의 포인터 타입은 부모의 포인터 타입으로의 암묵적인 변환을
  //   허용합니다.
  //  => Upcasting
  Animal *pb = &c;

  // - 부모의 포인터 타입은 자식의 포인터 타입으로의 암묵적인 변환을
  //   허용하지 않습니다.
  // => 반드시 명시적인 캐스팅이 필요합니다.
  Cat *pd = static_cast<Cat *>(pb);
  // => 잘못된 타입이 전달된 경우에 문제가 발생할 수 있습니다.
}