// 10_함수오버로딩.cpp
#include <iostream>
using namespace std;

// C
#if 0
// - 요구하는 입력타입과 결과타입에 따라서 다른 함수를 제공합니다.
int square_int(int x) { return x * x; }
double square_double(double x) { return x * x; }

int main()
{
    cout << square_int(10) << endl;
    cout << square_double(3.14) << endl;
}
#endif

// 함수 오버로딩
// 1. C++에서는 함수의 심볼이 이름과 인자 정보를 통해서 결정됩니다.
// 2. 인자 정보가 다르고 같은 이름의 함수는 다른 심볼을 갖습니다.
//  ex) foo()     => __Z3foov
//      foo(int)  => __Z3fooi

// 3. 인자 정보가 다르고 같은 이름의 함수를 여러개 제공할 수 있습니다.
//  => 함수 오버로딩(중복 적재)

int square(int x) { return x * x; }
double square(double x) { return x * x; }

void foo() { }
// int foo() {} - 불가능합니다.
void foo(int n = 100) { }
// 기본 파라미터와 사용할 때 주의가 필요합니다.
// foo(); - 모호성 오류

int main()
{
    // foo();

    cout << 10;
    cout << "hello";
    cout << 3.14;

    cout << square(10) << endl;
    cout << square(3.14) << endl;
}