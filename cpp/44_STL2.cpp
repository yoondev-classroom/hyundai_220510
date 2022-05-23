#include <iostream>
using namespace std;

template <typename T>
struct node
{
  T data;
  node *next;

public:
  node(const T &n, node *p) : data{n}, next{p} {}
};

// slist를 열거하는 객체: 반복자
// 컨테이너의 설계자는 반드시 자신의 컨테이너를 열거하기 위한 객체를 제공해야 한다.
template <typename T>
class slist_iterator
{
  node<T> *current;

public:
  slist_iterator(node<T> *p) : current{p} {}

  // 현재 위치의 값을 얻어오는 연산
  // *p

  T &operator*() { return current->data; }

  // 다음 위치로 이동하는 연산
  // ++ ++ ++p
  slist_iterator &operator++()
  {
    current = current->next;
    return *this;
  }

  // 위치를 비교하는 연산
  bool operator!=(const slist_iterator &rhs)
  {
    return current != rhs.current;
  }

  bool operator==(const slist_iterator &rhs)
  {
    return current == rhs.current;
  }
};

// 핵심
// : 컨테이너에서 현재 컨테이너의 시작과 끝 다음의 위치를 가르키는
// 반복자를 얻을 수 있어야 합니다.
//   begin: 시작 위치 반복자
//     end: 끝 다음 위치 반복자

template <typename T>
class slist
{
  node<T> *head;

public:
  slist() : head(nullptr) {}

  slist_iterator<T> begin()
  {
    return slist_iterator<T>(head);
  }

  slist_iterator<T> end()
  {
    return slist_iterator<T>(nullptr);
  }

  void push_front(const T &n)
  {
    head = new node(n, head);
  }

  T &front() const
  {
    return head->data;
  }
};

#include <list>

int main()
{
  // int x[3] = {30, 20, 10};
  list<int> x;
  x.push_front(10);
  x.push_front(20);
  x.push_front(30);

  auto p = x.begin();
  auto end = x.end();

  // int *p = x;
  // 첫번째 위치의 시작 주소
  // int *end = x + 3; // 끝 다음 위치

  while (p != end)
  {
    cout << *p << endl;
    ++p;
  }
}

#if 0
int main()
{
  int x[3] = {30, 20, 10};

  int *p = x;
  // 첫번째 위치의 시작 주소
  int *end = x + 3; // 끝 다음 위치

  while (p != end)
  {
    cout << *p << endl;
    ++p;
  }

#if 0
  slist<int> s;
  s.push_front(10);
  s.push_front(20);
  s.push_front(30);

  cout << s.front() << endl;
#endif
}
#endif