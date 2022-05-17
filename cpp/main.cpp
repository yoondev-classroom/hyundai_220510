// main.cpp
#include <iostream>
using namespace std;

// add 함수가 C언어의 함수일 때 선언합니다.
extern "C" int add(int a, int b);

int main()
{
    int result = add(10, 20);

    cout << result << endl;
}