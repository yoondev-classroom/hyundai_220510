// 27_초기화리스트.cpp
#include <iostream>
using namespace std;

// 1. 초기화와 대입의 차이점을 이해해야 합니다.
// 2. C++의 생성자에서 초기화를 수행하기 위해서는
//    "초기화리스트"를 사용해야 합니다.
// 3. 초기화 리스트를 반드시 사용해야 하는 경우가 있습니다.
//   => 아래 요소를 멤버 데이터로 가진 경우
//   1) 레퍼런스
//   2) 상수
//   3) ???

class Point {
    int x;
    int y;

    const int c;
    int& ry;

public:
    Point(int a, int b)
        // : x(a), y(b)
        : x { a }
        , y { b }
        , c { a } // 상수
        , ry { b } // 참조
    {
        // 아래처럼 사용하는 것은 대입입니다.
        // x = a;
        // y = b;
        // c = a;
    }
};

#if 0
int main()
{
    int a = 10; // 초기화

    int b;
    b = 10;     // 대입
}
#endif