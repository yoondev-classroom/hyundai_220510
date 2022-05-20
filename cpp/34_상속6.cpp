// 34_상속6.cpp
#include <iostream>
using namespace std;

// 클라이언트가 stack을 요구합니다.
// 이미 잘 만들어진 list가 있습니다.
// SW에서 재사용에는 상속을 사용합니다.

#include <list>

// private 상속
// - 부모의 구현은 물려 받지만(자식 클래스 내부에서 사용하지만)
//   인터페이스를 물려 받지 않겠다.
//   (부모의 기능을 외부에 공개하지 않겠다.)

// Adapter Pattern
// : 기존 클래스의 사용 방법을 변경해서,
//   새로운 클래스처럼 보이게 하는 설계 방법.

#if 0
// 상속
class Stack : private list<int>
{
  // 부모가 제공하는 모든 기능을 이용할 수 있습니다.
public:
  void push(int n)
  {
    list<int>::push_back(n);
  }

  void pop()
  {
    list<int>::pop_back();
  }

  int &top()
  {
    return list<int>::back();
  }
};
#endif

// 포함
class Stack
{
private:
  list<int> s;

public:
  void push(int n)
  {
    s.push_back(n);
  }

  void pop()
  {
    s.pop_back();
  }

  int &top()
  {
    return s.back();
  }
};

int main()
{
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);

  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  s.pop();
}