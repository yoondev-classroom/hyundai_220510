// 21_OOP5.cpp
#include <iostream>
using namespace std;

// 5) 사용자가 원하는 크기의 스택을 생성할 수 있도록 만들어봅시다.
//  - 객체가 파괴될 때, 호출되는 약속된 함수가 있습니다.
//   : 소멸자(Destructor)
//    1) ~클래스이름() 형태로 약속되어 있습니다.
//    2) 인자는 없고, 반환타입도 없습니다.
//    3) 오버로딩 불가능합니다.

class Stack {
private:
    int* buff;
    int top;

public:
    // 생성자 오버로딩이 가능합니다.
#if 0
    Stack()
    {
        cout << "Stack()" << endl;
        buff = new int[10];
        top = 0;
    }
#endif
    ~Stack()
    {
        cout << "~Stack()" << endl;
        delete[] buff;
    }

    Stack(int size = 10)
    {
        cout << "Stack(int)" << endl;
        buff = new int[size];
        top = 0;
    }

    void push(int n)
    {
        buff[top++] = n;
    }

    int pop()
    {
        return buff[--top];
    }
};

// Stack s;
//   => Stack() : Default Constructor
// Stack s(10);
// Stack s{10};
// Stack s = 10;
// Stack s = {10};
//   => Stack(int size)

int main()
{
    cout << "foo start" << endl;
    {
        Stack s2;
    }
    cout << "foo end" << endl;

    cout << "main 시작" << endl;
    // Stack s1 { 10 }; // 객체
    // -> Stack(int)

    Stack s1;
    // -> Stack(10)

    cout << "-----------" << endl;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}