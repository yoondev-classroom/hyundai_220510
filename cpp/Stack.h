// Stack.h

#ifndef STACK_H_
#define STACK_H_

#include <iostream>

class Stack {
private:
    int* buff;
    int top;

public:
    ~Stack();
    Stack(int size = 10);
    inline void push(int n);
    inline int pop();
};

void Stack::push(int n)
{
    buff[top++] = n;
}

int Stack::pop()
{
    return buff[--top];
}

#endif