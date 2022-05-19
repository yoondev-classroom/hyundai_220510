// 31_static.cpp
#include <iostream>
using namespace std;

// 자동차 객체가 몇개 생성되었는지 카운트 하고 싶다.

// 전역 변수
// : 모든 객체가 접근할 수 있지만, 접근 제어가 불가능합니다.
// => 전역 변수인데 Car 클래스만 사용할 수 있게 만들고 싶습니다.
//   : static(정적 멤버 변수)

// 정리
// 1. 정적 멤버 변수는 모든 객체가 공유합니다.
// 2. 정적 멤버 변수는 반드시 외부 정의가 필요합니다.
//   - 소스 파일
// 3. 정적 멤버 변수에 접근하는 방법
//     1) 객체
//     2) 클래스
// 4. 정적 멤버 변수는 객체를 생성하지 않아도 존재합니다.

class Car
{
public:
  int color;
  static int cnt;
  // 정적 멤버 변수 - 외부 정의가 필요합니다.

public:
  Car()
  {
    ++cnt;
  }

  int GetCount() { return cnt; }
};

// 소스 파일에 작성해야 합니다.
int Car::cnt = 0;

int main()
{
  Car c1;
  Car c2;
  Car c[10];

  cout << sizeof(c1) << endl;

  cout << c1.GetCount() << endl;
  // 객체를 통한 접근
  cout << c1.cnt << endl;
  cout << c2.cnt << endl;

  // 클래스를 통한 접근
  cout << Car::cnt << endl;
}