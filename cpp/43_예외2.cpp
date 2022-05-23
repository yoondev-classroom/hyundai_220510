#include <iostream>
using namespace std;

int foo(int n)
{
  if (n < 0)
    return -1; // 실패

  return 20; // 성공
}

int main()
{
  foo(-100);
}