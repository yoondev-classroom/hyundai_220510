#include <iostream>
using namespace std;

class Base
{
private:
  int a;

protected:
  int b;

public:
  int c;
};

// 접근 변경자
//  클래스: public 부모 클래스
class Derived : public Base
{
  // a: 부모의 private은 접근이 불가능하다.
  // b: protected
  // c: public
};

class Derived2 : protected Base
{
  // a: 부모의 private은 접근이 불가능하다.
  // b: protected
  // c: public -> protected
};

class Derived3 : private Base
{
  // a: 부모의 private은 접근이 불가능하다.
  // b: protected -> private
  // c: public -> private
};

int main()
{
  Base b;
  Derived3 d;
  cout << d.c << endl;
}