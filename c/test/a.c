// a.c
// static int add(int a, int b)

#include "test.h"

int add(int a, int b)
{
    return a + b;
}

#if 0
❯ nm a.o
0000000000000000 T _add
#endif

// gcc a.c -c