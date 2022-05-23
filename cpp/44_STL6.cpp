#include <iostream>
using namespace std;

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

// void sort(int *x, int n, bool (*cmp)(int, int))
// void sort(int *x, int n, Cmp1 cmp)
// void sort(int *x, int n, Cmp2 cmp)

template <typename T>
void sort(int *x, int n, T cmp)
{
  for (int i = 0; i < n - 1; ++i)
  {
    for (int j = i + 1; j < n; ++j)
    {
      // if (x[i] < x[j])
      if (cmp(x[i], x[j]))
        swap(x[i], x[j]);
    }
  }
}

// 핵심
// => C++ 알고리즘 함수는 정책을 템플릿으로 만들었습니다.
//  : 함수 포인터 기반으로 정책을 전달하거나,
//    함수 객체를 통해 정책을 전달하는 것이 가능합니다.

int main()
{
  Cmp1 cmp1;

  int x[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
  sort(x, 10, cmp1);

  for (auto e : x)
    cout << e << endl;
}

#if 0
int main()
{
  Cmp1 cmp1;
  cmp1(10, 20); // Cmp1::operator()(10, 20);

  Cmp2 cmp2;
  cmp2(10, 20); // Cmp2::operator()(10, 20);
}
#endif