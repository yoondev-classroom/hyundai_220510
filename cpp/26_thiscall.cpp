// 26_thiscall.cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    // void Set(Point* this, int a, int b)
    void Set(int a, int b)
    {
        x = a;
        // this->x = a;
        y = b;
        // this->y = b;
    }
};

void Foo(int a, int b)
{
}

int main()
{
    Point p1, p2;
    p1.Set(10, 20); // Set(&p1, 10, 20)
    p2.Set(30, 40); // Set(&p2, 30, 40)
}