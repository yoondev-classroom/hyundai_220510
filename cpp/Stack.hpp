// Stack.hpp
#ifndef STACK_HPP_
#define STACK_HPP_

#include <iostream>

template <typename TYPE>
class Stack {
private:
    TYPE* buff; // !!
    int top;

public:
    ~Stack();
    Stack(int size = 10);
    void push(const TYPE& n);
    TYPE pop();
};

template <typename TYPE>
Stack<TYPE>::~Stack()
{
    std::cout << "~Stack()" << std::endl;
    delete[] buff;
}

template <typename TYPE>
Stack<TYPE>::Stack(int size /*= 10*/)
{
    std::cout << "Stack(int)" << std::endl;
    buff = new TYPE[size]; // !!
    top = 0;
}

template <typename TYPE>
void Stack<TYPE>::push(const TYPE& n)
{
    buff[top++] = n;
}

template <typename TYPE>
TYPE Stack<TYPE>::pop()
{
    return buff[--top];
}

#endif