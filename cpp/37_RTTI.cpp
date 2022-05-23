// 37_RTTI.cpp
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
  virtual ~Animal() {}

  int color = 100;
};

class Dog : public Animal
{
public:
  int age = 42;
};

class Cat : public Animal
{
public:
  string name = "Nabi";
};

// 1. 자식 클래스의 고유의 속성에 접근하기 위해서는
//    자식 포인터 타입으로의 변환이 필요합니다.

int main()
{

  // cout << p->color << endl;

  // static_cast는 자식 객체의 타입을 확인하지 않고
  // 무조건 캐스팅이 수행됩니다.
#if 0
  Cat *cat = static_cast<Cat *>(p);
  cout << cat->name << endl;

  Dog *dog = static_cast<Dog *>(p);
  cout << p->color << endl;
#endif

  // RTTI(RunTime Type Information)
  // : 실행 시간에 타입을 검사합니다.
  // 1. type_info 구조체
  //  - 타입의 정보를 가지고 있는 구조체 입니다.
  //  - 같은 타입이라면 동일한 객체를 참조합니다.
  //  - 객체를 통해서 꺼낼 수 있고,         - typeid(*p)
  //    타입을 통해서도 꺼낼 수 있습니다.     - typeid(Cat)
  // const type_info &t1 = typeid(*p);
  // const type_info &t2 = typeid(Cat);
  // p가 고양이라면,
  // if (t1 == t2)
  // 2. type_info 구조체는 가상함수 테이블에 저장됩니다.
  //    가상함수가 존재하지 않는 타입은 컴파일러가 타입으로 꺼내줍니다.

#if 0
  Animal *p = new Dog;
  if (typeid(*p) == typeid(Cat))
  {
    cout << "Cat 타입 입니다." << endl;
    Cat *pcat = static_cast<Cat *>(p);
    cout << pcat->name << endl;
  }
  else if (typeid(*p) == typeid(Dog))
  {
    cout << "Dog 타입 입니다." << endl;
    Dog *pdog = static_cast<Dog *>(p);
    cout << pdog->age << endl;
  }
  else
  {
    cout << "Animal 타입 입니다." << endl;
  }
#endif

  // dynamic_cast
  // => 타입을 조사해서, 타입이 다르면 nullptr을 반환합니다.
  // => 가상 함수 테이블이 존재해야 합니다.

  Animal *p = new Cat;
  Cat *p2 = dynamic_cast<Cat *>(p);
  cout << p2 << endl;

  if (p2)
  {
    cout << p2->name << endl;
  }

  // cout << p->name << endl;
}