// 13_함수삭제.cpp
#include <iostream>
using namespace std;

// 최대 공약수
int gcd(int a, int b)
{
    return b != 0 ? gcd(b, a % b) : a;
}

// double 타입에 대해서는 gcd 함수가 제대로 동작하지 않도록 하고 싶다.
// 1) 구현을 제공하지 않고, 선언만 합니다.
//  => 링크 오류
//   : 문제의 원인을 찾기 어렵습니다.
//     의도가 전달되기 어렵습니다.
// double gcd(double a, double b); - 선언만 한다.
#if 0
Undefined symbols for architecture arm64:
  "gcd(double, double)", referenced from:
      _main in 13_함수삭제-132f73.o
ld: symbol(s) not found for architecture arm64
#endif

// 2. C++11 - delete function
//  목적: 함수 호출을 금지합니다.
//       금지된 함수를 호출한 경우, 컴파일 오류가 발생합니다.
double gcd(double a, double b) = delete;

int main()
{
    cout << gcd(13, 3) << endl;
    // cout << gcd(3.14, 2.1) << endl;
    // - error!
}