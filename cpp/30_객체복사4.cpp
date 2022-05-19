// 30_객체복사4.cpp
#include <iostream>
#include <string>
using namespace std;

// 얕은 복사 문제 해결 방법 3가지
// 1. 깊은 복사
// 2. 참조 계수
// 3. 복사 금지

class User
{
private:
  char *name;
  int age;

  // C++11 이전
  // - private
  // - 선언만 한다.
  // User(const User &rhs);

public:
  // 복사 금지 => 복사를 사용하였을 경우, 컴파일 오류가 발생합니다.
  // delete function - C++11
  User(const User &rhs) = delete;

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

  // User user2 = user; // 복사 생성자
  // user2.Print();
}