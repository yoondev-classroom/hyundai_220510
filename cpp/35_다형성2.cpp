#include <iostream>
using namespace std;

#if 0
class Dog
{
private:
  int age = 10;

public:
  int GetAge() const { return age; }
};

class Cat
{
private:
  int age = 20;

public:
  int GetAge() const { return age; }
};

void PrintAge(Dog *p)
{
  cout << p->GetAge() << endl;
}

void PrintAge(Cat *p)
{
  cout << p->GetAge() << endl;
}
#endif

class Animal
{
private:
  int age = 20;

public:
  int GetAge() const { return age; }
};

// Animal을 상속 받는 모든 자식 클래스는 해당 기능을 이용할 수 있습니다.
// 1. 동종을 처리하는 함수를 정의할 수 있습니다.
void PrintAge(Animal *p)
{
  cout << p->GetAge() << endl;
}

class Cat : public Animal
{
};
class Dog : public Animal
{
};

int main()
{
  Cat c;
  Dog d;

  PrintAge(&c);
  PrintAge(&d);
}