#include <iostream>
using namespace std;

// 1. 결과는 return 하고 오류는 throw 합니다.
// 2. 결과는 반환값을 통해 전달 받고, 오류는 catch 해야 합니다.

int foo(int n)
{
  if (n < 0)
    throw "error";
  // throw -1; // 실패

  return 20; // 성공
}

int main()
{
  try
  {
    foo(-100);
  }
  catch (const char *s)
  {
    cout << s << endl;
  }
  catch (int &e)
  {
    cout << e << endl;
  }
}