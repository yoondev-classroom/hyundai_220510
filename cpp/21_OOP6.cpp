// 21_OOP6.cpp
#include <iostream>
using namespace std;

// 6. 소스파일과 헤더파일을 분리하는 방법
#include "Stack.h"
// g++ Stack.cpp 21_OOP6.cpp

int main()
{
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}