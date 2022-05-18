// 15_for.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x[5] = { 65, 66, 67, 68, 69 };
    int x2[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

    // 인덱스 정보가 필요할 때
    for (int i = 0; i < 5; ++i) {
        cout << x[i] << endl;
    }

    // 인덱스 정보가 필요하지 않을 때,
    //  : ranged-for, C++11 / foreach(C#) / 향상된 for(Java)
    //  + auto
    for (auto e : x) {
        cout << e << endl;
    }

    string str = "hello world show me the money";
#if 0
    for (int i = 0; i < str.size(); ++i) {
        cout << str[i] << endl;
    }
#endif
    for (auto e : str) {
        cout << e << endl;
    }
}