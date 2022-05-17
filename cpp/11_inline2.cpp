#include <iostream>
using namespace std;

// inline 함수 문제점
// 1. 바이너리의 크기가 커질 수 있습니다.
// 2. 성능에 중요한 함수에서 사용하고,
//    간결한 함수에서 사용하는 것을 권장합니다.

void foo()
{
}

inline void goo()
{
}

int main()
{
    foo();
    goo();
}