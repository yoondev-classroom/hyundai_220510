
#include <iostream>
using namespace std;

// Uniform Initialization
// - Preventing Narrow
// 1. 실수가 정수로의 암묵적인 변환이 허용하지 않습니다.
// 2. 더 큰 정수타입이 작은 정수 타입으로의 변환도 허용되지 않습니다.

int main()
{
    // int x1 = 3.14;
    // int x1 = { 3.14 };

    signed char c1 = { 300 };
    printf("%d\n", c1);
}
