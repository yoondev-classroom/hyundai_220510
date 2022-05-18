// 17_레퍼런스.cpp
#include <iostream>
using namespace std;

// C++ 에서는 레퍼런스 타입의 개념이 존재합니다.
// => 기존 메모리에 새로운 이름을 부여합니다.
int main()
{
    int n = 10;
    int& r = n;

    r = 100;
    cout << n << endl;
}

#if 0
int main()
{
    int n = 10;
    int* p = &n;

    *p = 100;
    cout << n << endl;
}
#endif