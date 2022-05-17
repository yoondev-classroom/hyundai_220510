// 4_변수4.cpp
#include <iostream>
using namespace std;

// auto - C++11
//  : 컴파일 타임에 우항의 타입과 동일한 타입으로 타입을 추론합니다.
// => '반드시 초기화'가 필요합니다.
// => C에서 지역 변수를 의미하는 auto를 C++에서는 다른 의미로
//    사용합니다.

// decltype 연산자 - C++11
// => '초기화 없이' 특정한 변수와 동일한 타입의 변수를 선언할 수 있습니다.

int main()
{
    int x[5] = { 1, 2, 3, 4, 5 };

    auto n = x[2];
    // auto n2; - error!
    // 반드시 초기화가 필요합니다.

    decltype(n) n2;
}