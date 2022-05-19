// 24_생성자.cpp
#include <iostream>
using namespace std;

// 1. 사용자가 생성자를 1개도 작성하지 않으면,
//    컴파일러가 자동으로 기본 생성자를 제공합니다.
//    => 아무 동작도 수행하지 않습니다.
// 2. 생성자는 오버로딩이 가능합니다.
#if 0
Point()
{
  // ...
}
#endif

class Point {
private:
    int x;
    int y;

public:
    // Point()
    // {
    //     cout << "Point()" << endl;
    //     x = 0;
    //     y = 0;
    // }

    Point(int a, int b)
    {
        cout << "Point(int, int)" << endl;
        x = a;
        y = b;
    }

    void Print()
    {
        cout << x << ", " << y << endl;
    }
};

int main()
{
    Point pt1[3] = {
        { 10, 20 },
        { 10, 20 },
        { 10, 20 },
    };

    Point pt2[3] {
        { 10, 20 },
        { 10, 20 },
        { 10, 20 },
    };
}

#if 0
int main()
{
    Point pt3;

    Point pt1(10, 20);
    Point pt2 { 100, 200 };

    pt1.Print();
    pt2.Print();

    // Point pt;
}
#endif