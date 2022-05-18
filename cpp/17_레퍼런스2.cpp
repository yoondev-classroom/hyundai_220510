#include <iostream>
using namespace std;

// 레퍼런스
// 1. 기존 메모리에 새로운 이름을 부여합니다.
// 2. 반드시 초기화가 필요합니다.
//  : 널 참조 개념이 존재하지 않습니다.

// Call by value
void inc1(int n)
{
    ++n;
}

// Call by pointer
void inc2(int* p)
{
    ++(*p);
}

// Call by reference
void inc3(int& r)
{
    ++r;
}

int main()
{
    int n = 0;
    inc1(n);
    inc2(&n);
    inc3(n);

    cout << n << endl;

    // int& r; - error!
}