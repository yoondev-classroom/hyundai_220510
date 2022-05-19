// 27_초기화리스트2.cpp
#include <iostream>
using namespace std;

// 멤버 데이터 변수 - 이름 규칙
// 1. x_ => 권장
// 2. _x
// 3. m_x
// 4. mX

class Point {
    int x_;
    int y_;

public:
    Point(int x, int y)
        : x_(x)
        , y_(y)
    {
    }

    void SetX(int x)
    {
        x_ = x;
    }
};

int main()
{
    Point pt { 0, 0 };
}