#include <iostream>
using namespace std;

#include <algorithm> // 정책이 템플릿(T)인 sort가 있습니다.

bool f1(int a, int b)
{
  return a < b;
}

bool f2(int a, int b)
{
  return a > b;
}

class Cmp1
{
public:
  bool operator()(int a, int b) const { return a > b; }
};
class Cmp2
{
public:
  bool operator()(int a, int b) const { return a < b; }
};

int main()
{
  int x[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

  // sort(x, x + 10, &f1);
  // 1. 정책을 함수 포인터로 전달 할 때
  // 장점: 정책이 여러번 교체 되어도, 코드 메모리 상의 하나의 함수를 이용한다.
  // 단점: 정책의 인라인 치환이 불가능합니다.
  sort(begin(x), end(x), &f1); // sort(int*, int*, bool(*)(int, int))
  sort(begin(x), end(x), &f2);

  // 2. 정책을 함수 객체로 전달 할 때
  // 장점: 정책의 인라인 치환이 가능합니다.
  // 단점: 정책을 교체한 횟수 만큼의 sort 함수가 필요합니다.
  Cmp1 cmp1;
  sort(begin(x), end(x), cmp1); // sort(int*, int*, Cmp1)

  Cmp2 cmp2;
  sort(begin(x), end(x), cmp2); // sort(int*, int*, Cmp2)

  for (auto e : x)
    cout << e << endl;
}
