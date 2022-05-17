#include <iostream>
using namespace std;

// g++ source.cpp -std=c++11
//                -std=c++14
//                -std=c++17

struct Point {
    double x = 10;
    int y = 20;
    float z = 30;
    char c = 'A';
};

int main()
{
    Point pt;

    // double x = pt.x;
    // int y = pt.y;
    // float z = pt.z;

    // auto x = pt.x;
    // auto y = pt.y;
    // auto z = pt.z;

    // C++17: Structured Binding 선언
    // 1) auto를 반드시 사용해야 합니다.
    // 2) 멤버 데이터 개수와 동일하게 선언해야 합니다.
    auto [x, y, z, c] = pt;
    cout << x << ", " << y << ", " << z << c << endl;

    int arr[3] = { 10, 20, 30 };
    auto [q, w, e] = arr;
    cout << q << ", " << w << ", " << e << endl;
}