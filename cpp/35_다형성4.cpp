// 35_다형성4.cpp
#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void Go() { cout << "Animal Go" << endl; }
};

class Dog : public Animal
{
public:
  // 함수 오버라이딩
  //  정의: 부모가 제공한 함수와 동일한 함수를 자식 클래스에서도
  //       제공할 수 있습니다.
  virtual void Go() { cout << "Dog Go" << endl; }
};

class Cat : public Animal
{
public:
  virtual void Go() { cout << "Cat Go" << endl; }
};

void Go(Animal *p)
{
  p->Go();
}

// 함수 바인딩: 어떤 함수를 호출할지 결정하는 것
//   Animal *p = &d;
//   p->Go()

// static binding
// - 컴파일 타임에 결정하는 것
//   p의 타입을 보고 함수를 결정하는 것

// dynamic binding
// - 런타임 결정하는 것
//   p가 실행 시간에 어떤 객체 타입을 가지고 있는지 확인하는 코드를
//   컴파일러가 삽입하고,
//   실행시간에 타입을 조사해서 함수를 호출하는 것

int main()
{
  Go(new Animal);
  Go(new Dog);
  Go(new Cat);

  // Animal a;
  // Dog d;

  // Go(&a);
  // Go(&d);

  // Animal *p = &d;
  // p->Go();
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