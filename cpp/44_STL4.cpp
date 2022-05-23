#include <iostream>
using namespace std;

// 알고리즘 => 컨테이너에 작용하는 일반 함수

// 선형 구간에서 원하는 값의 위치를 반환하는 함수입니다.
template <typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 value)
{
  while (first != last && *first != value)
  {
    ++first;
  }

  return first;
}

#include <algorithm> // find
#include <list>
#include <vector>

int main()
{
  // begin: 시작 위치
  //   end: 끝 다음
  // [begin, end)
  //  : 반개구간

  vector<int> v = {50, 40, 30, 20, 10};
  sort(begin(v), end(v));

  for (auto e : v)
  {
    cout << e << endl;
  }

#if 0
  auto p = find(begin(v), end(v), 20);
  if (p != end(v))
  {
    cout << *p << endl;
  }
#endif
}

#if 0
int main()
{
  int x[5] = {10, 30, 20, 40, 80};

  int *p = xfind(x, x + 5, 20);
  if (p != x + 5)
  {
    cout << *p << endl;
  }
}
#endif