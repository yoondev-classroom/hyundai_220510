// 4_변수.cpp
#include <iostream>
using namespace std;

// 사용자 정의 타입
// 1. struct
// 2. union
// 3. enum

#if 0
struct AAA {
};
union BBB {
};
enum CCC {};

int main()
{
    struct AAA aaa;
    union BBB bbb;
    enum CCC ccc;
}
#endif

struct AAA {
};
union BBB {
};
enum CCC {};

// 1. C++에서 사용자 정의 타입 변수를 만들때,
//    struct / union / enum을 생략할 수 있습니다.
//    => 타입으로 바로 인식됩니다.
#if 0
int main()
{
    AAA aaa;
    BBB bbb;
    CCC ccc;
}
#endif

// 2. C++11 부터 멤버 데이터 변수의 초기값을 지정할 수 있습니다.
struct Point {
    // 멤버 데이터 변수
    int x = 0;
    int y = 0;
};

int main()
{
    // Point pt = { 0, 0 };
    // Point pt = { .x = 0, .y = 0 };
    Point pt;
    cout << pt.x << ", " << pt.y << endl;
}