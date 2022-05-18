// 20_nullptr.cpp
#include <iostream>
using namespace std;

// #define NULL (void*)0

void foo(int n) { cout << n << endl; }
void foo(int* p) { cout << p << endl; }

// C++11
//  : nullptr
//  - 포인터 타입의 NULL을 대체합니다.
//  - nullptr_t
//     : bool(true/false)으로의 변환이 허용됩니다.

int main()
{
    int* p1 = nullptr;
    if (!p1) {
        cout << "NULL 입니다." << endl;
    }

    foo(10);
    foo(nullptr);

    // foo(NULL); - error!

    // int* p1 = NULL;
    // int* p1 = 0;
    // 정수 타입 0은 포인터 타입으로의 암묵적인 변환이 허용됩니다.
}