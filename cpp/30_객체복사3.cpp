// 30_객체복사3.cpp
#include <iostream>
#include <string>
using namespace std;

// 얕은 복사 문제 해결 방법 3가지
// 2. 참조 계수
//  - 자원을 참조하는 포인터의 갯수를 카운팅해서
//    참조 계수가 0이 될 때 자원을 해지합니다.

class User
{
private:
  char *name;
  int age;

  int *ref;

public:
  User(const char *s, int a)
      : age{a}
  {
    name = new char[strlen(s) + 1];
    strcpy(name, s);

    ref = new int;
    *ref = 1;
  }

  User(const User &rhs)
      : name{rhs.name}, age{rhs.age}, ref{rhs.ref}
  {
    ++(*ref);
  }

  ~User()
  {
    if (--(*ref) == 0)
    {
      delete ref;
      delete[] name;
    }
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