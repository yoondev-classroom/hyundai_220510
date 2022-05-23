// 44_STL5.cpp
#include <iostream>
using namespace std;

// 정책을 사용자가 결정할 수 있도록 하고 싶습니다.
// => 공통성과 가변성의 분리
//  "변하는 것과 변하지 않는 것은 분리되어야 한다."
//  "변하지 않는 전체 알고리즘에서 변해야 하는 정책은 분리되어야 한다."
//   : 함수에서 정책을 분리하는 방법
//   - "함수 포인터 인자"를 통해 분리할 수 있습니다.
void sort(int *x, int n, bool (*cmp)(int, int))
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

// bool (*)(int, int)
bool cmp1(int a, int b) { return a > b; }
bool cmp2(int a, int b) { return a < b; }

// 인라인 함수라도 함수 포인터에 담아서 호출하면,
// 인라인화가 불가능합니다!

int main()
{
  int x[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
  sort(x, 10, &cmp2);

  for (auto e : x)
    cout << e << endl;
}