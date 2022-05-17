// const.cpp
#include <iostream>
using namespace std;

// 1. 상수는 반드시 초기화가 필요합니다.
// 2. 상수
//   - 컴파일 타임 상수
//   : 컴파일러는 상수를 위해 메모리를 할당하지 않고,
//     상수에 대한 접근에 대해서 메모리에 접근하지 않습니다.

//   - 런타임 상수
//   : 런타임에 결정되는 값을 상수로 취급하는 것을 의미합니다.
//   - 메모리로부터 값을 읽어야 합니다.

// 3. constexpr: 컴파일 타임 상수에만 지정가능한 키워드입니다.

int main()
{
    constexpr int c = 10;

    // int n;
    // cin >> n;

    // const int c = n;

    int* p = (int*)&c;
    *p = 100;

    cout << c << endl;
    cout << *p << endl;
}