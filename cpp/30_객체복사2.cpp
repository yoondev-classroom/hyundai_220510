// 30_객체복사2.cpp
#include <iostream>
#include <string>
using namespace std;

// 얕은 복사 문제 해결 방법 3가지
// 1. 깊은 복사
// 2. 참조 계수(Reference Counting)
class User
{
private:
  char *name;
  int age;

public:
  // 깊은 복사
  User(const User &rhs)
      : age{rhs.age}
  {
    name = new char[strlen(rhs.name) + 1];
    strcpy(name, rhs.name);
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