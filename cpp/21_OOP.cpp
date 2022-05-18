// 21_OOP.cpp
#include <iostream>
using namespace std;

// "Stack"을 만들어봅시다.
//  : 자료구조

// Stack / Queue
//  : 우선순위 큐
//  - 데이터가 삽입된 순서에 상관없이, 우선순위가 가장 높은 데이터가 먼저
//    나옵니다.
//  Stack: 가장 마지막에 들어간 데이터가 우선순위가 높습니다.
//    LIFO(Last In First Out)
//  Queue: 가장 먼저 들어간 데이터가 우선순위가 높습니다.
//    FIFO(First In First Out)

// 1) 전역 변수
//  => 2개 이상의 스택을 생성하기 어렵습니다.
int buff[10];
int top = 0;

void push(int n)
{
    buff[top++] = n;
}

int pop()
{
    return buff[--top];
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
}