// add.cpp
#include <stdio.h>

void foo() { printf("foo\n"); }

extern "C" int add(int a, int b)
{
    auto n1 = a;
    auto n2 = b;

    foo();

    return n1 + n2;
}
