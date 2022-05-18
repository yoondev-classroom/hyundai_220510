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
    void push(int n);
    int pop();
};

#endif