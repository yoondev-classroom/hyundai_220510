#include <stdio.h>

// 1. 상수는 초기화 이후에 값을 변경할 수 없습니다.
// 2. C언어에서 상수를 사용하는 방법
//   1) 매크로 상수
//   2) const
// 3. const는 반드시 초기화를 수행해야 합니다.

// #define PI 3.14
const double PI = 3.14;

int main(void)
{
    // PI = 100; - error!

    // const int a;
    // a = 10; - error!

    printf("%lf\n", PI);
    return 0;
}