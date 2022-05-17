// 9_기본파라미터.cpp
#include <iostream>
using namespace std;

// 1. C++에서는 함수의 파라미터의 기본값을 지정할 수 있습니다.
// : 기본 파라미터(Default Parameter)
// - 함수에서 전달된 인자가 없는 경우, 기본값을 컴파일러가 자동으로 처리해줍니다.
// 2. 주의사항
//  1) 함수의 파라미터 마지막부터 기본값 지정이 가능합니다.
//  2) 파라미터 기본값은 함수의 선언부에 작성되어야 합니다.

#if 0
int add(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}
#endif
int add(int a, int b, int c = 0, int d = 0);

int main()
{
    int result = add(10, 20); // add(10, 20, 0, 0)

    result = add(10, 20, 30); // add(10, 20, 30, 0)

    // int result = add(10, 20, 0, 0);
    // result = add(10, 20, 30, 0);
}

int add(int a, int b, int c /* = 0 */, int d /* = 0 */)
{
    return a + b + c + d;
}