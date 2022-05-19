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

#if 0
// 인라인 함수는 헤더 파일에 구현이 제공되어야 합니다.
void Stack::push(int n)
{
    buff[top++] = n;
}

int Stack::pop()
{
    return buff[--top];
}
#endif
