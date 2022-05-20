// 35_다형성3.cpp
#include <iostream>
#include <vector>
using namespace std;

class Animal
{
};

class Dog : public Animal
{
};
class Cat : public Animal
{
};
class Rabbit : public Animal
{
};

int main()
{

  // 2. 동종을 보관하는 컨테이너를 사용할 수 있습니다.
  vector<Animal *> animals;
  animals.push_back(new Dog);
  animals.push_back(new Cat);
  animals.push_back(new Rabbit);

  // vector<Dog *> dogs;
  // vector<Cat *> cats;
  // vector<Rabbit *> rabbits;
}

// DRY(Don't Repeat Yourself)