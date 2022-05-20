// test1.cpp
#if 0
void foo();

// 정의
#include "test.h"

int main()
{
  foo();
}
#endif

#include <stdio.h>

extern int n;

int main(void)
{
  printf("%d\n", n);
  return 0;
}