// 21_OOP2.cpp
#include <iostream>
using namespace std;

// 2) 스택 타입을 설계합니다.
// => 사용자 정의 타입
// 문제점
// - 스택을 조작하는 모든 함수가,
//   반드시 스택을 인자로 전달받아야 합니다.
// 원인: 상태를 관리하는 구조체의 멤버 데이터 변수와
//      상태를 조작하는 함수가 일반 함수로 되어 있기
//      때문입니다.

// => 데이터 캡슐화
struct Stack {
    int buff[10];
    int top;
};

void init(Stack* s)
{
    s->top = 0;
}

void push(Stack* s, int n)
{
    s->buff[s->top++] = n;
}

int pop(Stack* s)
{
    return s->buff[--s->top];
}

Stack s2;

int main()
{
    init(&s2);
    push(&s2, 100);
    push(&s2, 200);
    push(&s2, 300);
    cout << pop(&s2) << endl;
    cout << pop(&s2) << endl;
    cout << pop(&s2) << endl;

    Stack s1;
    init(&s1);

    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);

    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
    cout << pop(&s1) << endl;
}