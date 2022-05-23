
#include <iostream>
using namespace std;

#include <algorithm> // 알고리즘 일반 함수

// C++에서 함수 객체를 정책으로 전달하는 것은
// 정책을 인라인 치환 할 수 있습니다.
// => 성능의 장점이 있습니다.

// 함수 객체를 만드는 것이 매우 번거롭습니다.
// => C++11: 함수 객체를 편리하게 만드는 방법이 새롭게 도입되었습니다.
//  : C++ Lambda Expression(람다 표현식)

class Less
{
public:
  bool operator()(int a, int b) const { return a < b; }
};

// 람다 표현식
// : 실행 가능한 코드 조각을 참조하는 기술
// C++ - 익명의 함수 객체를 생성하는 문법

int main()
{
  int x[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

  Less less;
  // sort(begin(x), end(x), less);

  sort(begin(x), end(x), [](int a, int b)
       { return a < b; });

  sort(begin(x), end(x), [](int a, int b)
       { return a > b; });

  for (auto e : x)
    cout << e << endl;
}