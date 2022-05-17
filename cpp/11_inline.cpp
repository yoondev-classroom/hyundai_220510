#include <iostream>
using namespace std;

// inline
// => 컴파일 최적화 키워드입니다.
// => 컴파일러가 최적화의 수행 여부를 결정합니다.
// => 기계어를 치환하기 때문에, 매크로 함수의 부작용이 발생하지
//    않습니다.
// => 인라인 최적화를 통해 함수가 더 이상 호출되지 않는다면,
//    함수의 기계어를 지울 수 있습니다.

// /Ob1: MSVC의 inline 최적화 명령입니다.

// #define SQUARE(x) ((x) * (x))

inline int square(int x) { return x * x; }
// 인라인 함수
//  : 호출하지 않고, 기계어를 치환합니다.

inline int add(int a, int b) { return a + b; }

int main()
{
    int result = add(10, 20); // 기계어 치환

    // 인라인 함수라도 함수 포인터를 통해 사용한다면
    // 호출됩니다.
    int (*fp)(int, int) = &add;
    (*fp)(10, 20);

    int x = 1;
    // cout << SQUARE(++x) << endl;
    // => 텍스트 치환이기 때문에 문제가 발생합니다.

    cout << square(++x) << endl;
}