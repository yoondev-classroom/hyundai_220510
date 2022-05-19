// 24_생성자2.cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point()
    {
        cout << "Point()" << endl;
        x = 0;
        y = 0;
    }

    ~Point()
    {
        cout << "~Point()" << endl;
    }

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

#include <cstdlib>

// 1. malloc을 통해서 객체를 생성한 경우, 생성자 호출이 되지 않습니다.
// 2. new를 통해서 객체를 생성한 경우, 생성자가 호출됩니다.
// 3. free를 통해 객체의 메모리를 해지한 경우, 소멸자가 호출되지 않습니다.
// 4. delete를 통해 객체의 메모리를 해지한 경우, 소멸자가 호출됩니다.

// new 연산자
// 1) 동적 메모리 할당
// 2) 할당된 메모리를 대상으로 생성자 호출

// delete 연산자
// 1) 소멸자를 호출한다.
// 2) 메모리를 해지한다.

int main()
{
    // Point* p1 = static_cast<Point*>(malloc(sizeof(Point)));
    // free(p1);

    Point* p1 = new Point;
    delete p1;
}