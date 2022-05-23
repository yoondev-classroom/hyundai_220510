// 39_연산자오버로딩3.cpp
// #include <iostream>
// using namespace std;

#include <cstdio>
// 표준 출력 객체
//  : cout

namespace std
{
  class ostream
  {
  public:
    ostream &operator<<(int n)
    {
      printf("%d", n);
      return *this;
    }

    ostream &operator<<(const char *s)
    {
      printf("%s", s);
      return *this;
    }
  };

  ostream cout;
}

int main()
{
  int n = 100;
  std::cout << n << "hello";
  // cout.operator<<(n).operator<<("hello")

  std::cout << n;
  // cout.operator<<(n);

  std::cout << "hello world";
  // cout.operator<<("hello world");
}