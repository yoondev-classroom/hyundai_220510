// 32_상수멤버함수2.cpp
#include <iostream>
using namespace std;

// 1. 멤버 함수는 인자를 통해서만 오버로딩이 가능한 것이 아니라,
//    const 여부를 통해 오버로딩도 가능합니다.

// 2. 객체의 상수성과 관련이 없는 멤버데이터는 mutable을 지정합니다.

// 3. 불변 객체(Immutable Object)가 좋다.
class Test
{
  int n = 10;

  // 객체의 상수성과 관련이 없는 멤버를 지정할 수 있습니다.
  mutable int foo_count = 0;

public:
// __ZNK4Test3fooEv : const
// __ZN4Test3fooEv  : const X
#if 0
  void foo()
  {
    cout << "foo" << endl;
    ++n;
  }
#endif

  void foo() const
  {
    cout << "foo const " << ++foo_count << endl;
  }
};

int main()
{
  Test t1;
  t1.foo();

  const Test &t2 = t1;
  t2.foo();
}