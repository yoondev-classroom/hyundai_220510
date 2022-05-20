// 33_this.cpp
#include <iostream>
using namespace std;

// this: 현재 객체의 주소
// => 멤버 함수에서만 사용 가능합니다.
class Car
{
public:
  // 멤버 함수가 자기 자신의 참조를 반환하면,
  // "연쇄적인 호출"을 사용할 수 있습니다.
  Car *Go()
  {
    // cout << this << endl;
    cout << "Go" << endl;
    return this;
  }

  // void Go(Car* const this)
  Car &Go2()
  {
    cout << "Go2" << endl;
    return *this;
  }
};

#if 0
int main()
{
  Car car;
  car.Go(); // Go(&car);
  cout << &car << endl;

  car.Go()->Go()->Go()->Go();

  car.Go2().Go2().Go2().Go2();
  // (car.Go2()).Go2().Go2();
  // (car.Go2()).Go2();
  // car.Go2();
}
#endif

#if 0
int main()
{
  int a = 10;
  int b = 20;
  int c = 30;

  // C: 값으로 평가됩니다.
  a = b = c;
  // a = 30;
  ++a;
  // 11

  // C++: 참조로 평가됩니다.
  a = b;

  a = 0;
  ++ ++ ++a;
  cout << a << endl;

  cout << a << ", " << b << ", " << c << endl;

  int n = 10;

  int *p = &n;

  int &r = *p;
  // int& r = n;
}
#endif

int &foo(int *p)
{
  return *p;
}

int main()
{
  int n = 10;
  // int *p = &n;

  int &r = foo(&n);

  // int &r = *p;
  // int& r = n;
}