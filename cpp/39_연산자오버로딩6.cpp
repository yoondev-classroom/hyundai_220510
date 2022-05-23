// 39_연산자오버로딩6.cpp
#include <iostream>
using namespace std;

class Integer
{
  int value;

public:
  Integer(int n = 0) : value(n) {}

  int GetValue() const { return value; }

  Integer &operator++()
  {
    ++value;
    return *this;
  }

  Integer operator++(int)
  {
    Integer current = *this;
    ++value;
    return current;
  }
};

ostream &operator<<(ostream &os, const Integer &n)
{
  return os << n.GetValue();
}

int main()
{
  Integer n = 100;
  ++ ++ ++ ++n;
  cout << n++ << endl;
  cout << n << endl;
  // cout.operator<<(n)
  // operator<<(cout, n)

  int n2 = 100;
  ++ ++n2;
  // n2.operator++().operator++()

  n2++;
  // n2.operator++(int)

  cout << n2 << endl;
}
