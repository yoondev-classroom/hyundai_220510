// Stack.cpp

#include "Stack.h"

Stack::~Stack()
{
    std::cout << "~Stack()" << std::endl;
    delete[] buff;
}

Stack::Stack(int size /*= 10*/)
{
    std::cout << "Stack(int)" << std::endl;
    buff = new int[size];
    top = 0;
}

void Stack::push(int n)
{
    buff[top++] = n;
}

int Stack::pop()
{
    return buff[--top];
}