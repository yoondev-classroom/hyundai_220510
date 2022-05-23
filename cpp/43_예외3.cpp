#include <iostream>
using namespace std;

// 예외를 정의하는 방법
//  => 사용자 정의 예외 타입을 정의합니다.
//   : std::exception의 자식 클래스로 만듭니다.

// what(): 함수를 재정의하면 원하는 오류 메세지를 클래스를 통해 관리할 수 있습니다.
//   : C++에서는 예외가 발생하지 않는 함수에 대해서는 noexcept를 지정합니다.
//    > noexcept는 함수의 이름을 결정하는 요소입니다.

// 잘못된 인자가 전달되었다.
class InvalidArgumentException : public std::exception
{
public:
  const char *what() const noexcept override
  {
    return "잘못된 인자가 전달되었습니다.";
  }
};

class OutOfMemoryException : public std::exception
{
public:
  const char *what() const noexcept override
  {
    return "메모리가 부족합니다.";
  }
};

void foo(int a)
{
  if (a == 0)
    throw InvalidArgumentException{};

  if (a == 1)
    throw OutOfMemoryException{};
}

int main()
{
  try
  {
    foo(0);
  }
  catch (exception &e)
  {
    cout << e.what() << endl;
  }
  catch (...) // 모든 에러를 처리합니다. 가장 마지막에 작성되어야 합니다.
              //  - else와 동일하게 동작합니다.
  {
    cout << "알수 없는 오류가 발생하였습니다." << endl;
  }

#if 0
  try
  {
    foo(1);
  }
  catch (InvalidArgumentException &e)
  {
    // cout << "잘못된 인자가 전달되었습니다." << endl;
    cout << e.what() << endl;
  }
  catch (OutOfMemoryException &e)
  {
    // cout << "메모리가 부족합니다." << endl;
    cout << e.what() << endl;
  }
#endif
}
