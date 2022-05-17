// 12_tempalate.cpp

#include <iostream>
using namespace std;

#if 0
int square(int x) { return x * x; }
double square(double x) { return x * x; }
short square(short x) { return x * x; }
#endif
// 인자타입과 반환타입만 다르고 로직이 완전히 동일합니다.
//  => 컴파일러가 자동으로 '코드를 생성'할 수 있습니다.

template <typename TYPE> // 타입 파라미터 정보
TYPE square(TYPE x)
{
    return x * x;
}
// 함수 템플릿
//  => 함수 인자를 통해 암묵적으로 TYPE이 결정됩니다.

int main()
{
    // 함수의 인자 정보를 통해 계속 코드를 생성합니다.
    // - 코드 메모리 사용량 증가
    square(42); // TYPE -> int
    square(3.14); // TYPE -> double

    square<double>(3.14f);
    // 명시적으로 타입을 결정할 수 있습니다.

    square(100);
}