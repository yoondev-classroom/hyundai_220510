// 21_OOP7.cpp
#include <iostream>
using namespace std;

// 7) 모든 타입에 대해서 동작하는 스택을 만들어봅시다.
//  => C++ Template

template <typename TYPE>
class Stack {
private:
    TYPE* buff; // !!
    int top;

public:
    ~Stack()
    {
        cout << "~Stack()" << endl;
        delete[] buff;
    }

    Stack(int size = 10)
    {
        cout << "Stack(int)" << endl;
        buff = new TYPE[size]; // !!
        top = 0;
    }

    // TYPE은 사용자 정의 타입도 올 수 있습니다.
    //  => const TYPE&
    // void push(TYPE n)
    void push(const TYPE& n)
    {
        buff[top++] = n;
    }

    TYPE pop()
    {
        return buff[--top];
    }
};

#include <string>

int main()
{
    Stack<string> s2;
    s2.push("hello");
    s2.push("world");

    cout << s2.pop() << endl;

    // 클래스 템플릿은 타입 인자를 명시적으로 지정해야 합니다.
    Stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}