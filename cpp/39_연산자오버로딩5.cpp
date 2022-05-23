
#if 0
#include <cstdio>
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

    ostream &operator<<(char c)
    {
      printf("%c", c);
      return *this;
    }

    ostream &operator<<(const char *s)
    {
      printf("%s", s);
      return *this;
    }

    // endl을 편하게 사용하기 위한 함수
    ostream &operator<<(ostream &(*f)(ostream &os))
    {
      return f(*this);
    }
  };

  ostream cout;
}

// std::endl은 IO 조정자입니다.
// => 정체는 함수 입니다.
std::ostream &endl(std::ostream &os)
{
  os << '\n';
  return os;
}
#endif

#include <iostream>
using namespace std;

std::ostream &menu(std::ostream &os)
{
  os << "1. 짜장면" << endl;
  os << "2. 짬짜면" << endl;
  os << "3. 울면" << endl;
  return os;
}

int main()
{
  int n = 100;
  const char *s = "hello";

  cout << 10 << endl;
  cout << menu;

  // cout << "1. 짜장면" << endl;
  // cout << "2. 짬짜면" << endl;
  // cout << "3. 울면" << endl;

  // endl(std::cout);

  // std::cout << n << s << std::endl;
}