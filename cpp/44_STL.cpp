// 44_STL.cpp
#include <iostream>
using namespace std;

// 1. 컨테이너
//   vector: push_front 존재하지 않습니다.
//     list: [] 임의 접근 연산이 제공되지 않습니다.

// 2. 반복자(Iterator)
//   컨테이너의 요소를 열거하기 위한 객체

// 3. 알고리즘
//   컨테이너를 대상으로 검색/정렬 등의 연산을 수행하는 "일반" 함수입니다.

#if 0
struct node
{
  int data;
  node *next;

public:
  node(int n, node *p) : data{n}, next{p} {}
};

class slist
{
  node *head;

public:
  slist() : head(nullptr) {}

  void push_front(int n)
  {
    head = new node(n, head);
  }

  int front() const
  {
    return head->data;
  }
};

int main()
{
  slist s;
  s.push_front(10);
  s.push_front(20);
  s.push_front(30);

  cout << s.front() << endl;
}
#endif

template <typename T>
struct node
{
  T data;
  node *next;

public:
  node(const T &n, node *p) : data{n}, next{p} {}
};

template <typename T>
class slist
{
  node<T> *head;

public:
  slist() : head(nullptr) {}

  void push_front(const T &n)
  {
    head = new node(n, head);
  }

  T &front() const
  {
    return head->data;
  }
};

int main()
{
  slist<int> s;
  s.push_front(10);
  s.push_front(20);
  s.push_front(30);

  cout << s.front() << endl;
}