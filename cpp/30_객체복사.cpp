// 30_객체복사.cpp
#include <iostream>
#include <string>
using namespace std;

// 1. 소멸자를 반드시 제공해야 하는 경우
// > 객체 내부에서 자원 할당을 하는 경우, 소멸자를 통해 해지해야 합니다.

// 2. 객체가 포인터 멤버 데이터를 가지는 경우,
//    "얕은 복사" 문제가 발생합니다.
//  - 객체가 포인터 멤버를 가질 경우, 반드시 복사 생성자를 제공해서
//    문제를 해결해야 합니다.

// 얕은 복사 문제 해결 방법 3가지
// 1. 깊은 복사

class User
{
private:
  char *name;
  int age;

public:
  // 컴파일러가 만들어주는 복사 생성자 형태
  User(const User &rhs)
      : name{rhs.name}, age{rhs.age}
  {
  }

  User(const char *s, int a)
      : age{a}
  {
    name = new char[strlen(s) + 1];
    strcpy(name, s);
  }

  ~User()
  {
    delete[] name;
  }

  void Print()
  {
    cout << name << ", " << age << endl;
  }
};

int main()
{
  User user{"Tom", 42};
  user.Print();

  User user2 = user; // 복사 생성자
  user2.Print();
}