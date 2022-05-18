// 21_OOP4.cpp
#include <iostream>
using namespace std;

// 4) 객체
//  - 객체가 생성되었을 때 약속된 함수가 호출됩니다.
//   => 초기화를 통해 객체를 사용할 수 있도록 해주어야 합니다.
//   => 생성자(Constructor)
//    1) 함수 이름이 클래스 이름과 동일합니다.
//    2) 반환 값이 없고, 반환값을 표기하지도 않습니다.
//    3) 생성자 함수의 인자가 존재할 수도 있고,
//       생성자 함수를 여러개 제공하는 오버로딩도 가능합니다.

class Stack {
private:
    int buff[10];
    int top;

public:
    Stack()
    {
        cout << "Stack()" << endl;
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

Stack s;

int main()
{
    cout << "main 시작" << endl;
    Stack s1; // 객체
    cout << "-----------" << endl;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}