// 21_OOP3.cpp
#include <iostream>
using namespace std;

// 3) 상태를 관리하는 멤버 데이터와 상태를 조작하는 함수를
//    묶기.
//  - 객체(상태 + 행위)
//  - OOP(Object Oriented Programming) : 객체 지향 프로그래밍
//   : 정보 은닉
//     외부에서 객체의 상태를 함부로 변경할 수 없도록 하는 언어적 기능
//     => 접근 지정자
//     - private: 내부에서만 접근이 가능합니다.
//     - public: 외부에서도 접근이 가능합니다.
//     => struct는 기본 접근 지정자가 public 입니다.
//        class는 기본 접근 지정자가 private 입니다.
//
//     class는 객체를 만들기 위한 틀

class Stack {
private:
    // 멤버 데이터 변수
    int buff[10];
    int top;

public:
    // 멤버 함수 / 메소드
    // => 순서에 상관없이 참조 가능합니다.
    void init()
    {
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

Stack s2;

int main()
{
    Stack s2;
    s2.init();
    // s2.top = -1;

    Stack s1; // 객체
    s1.init();

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
}