// 27_초기화리스트4.cpp
#include <iostream>
#include <string>
using namespace std;

// C++ 멤버 데이터를 초기화하는 방법 2가지
// 1) 초기화 리스트
//    생성자(..) : name{a}, age{n} {}

// 2) C++11: 필드 초기화
//      string name = "Tom"
//      int age = 42

// 주의사항
//  : 필드 초기화와 초기화 리스트를 사용할 경우,
//    초기화 리스트가 우선됩니다.

class User
{
private:
  string name;
  int age = 20;

public:
  User(const string &s)
      : name{s}
  {
  }

  void Print() { cout << name << "," << age << endl; }
};

int main()
{
  User user{"Bob"};
  user.Print();
}
