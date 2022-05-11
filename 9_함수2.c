// 9_함수2.c

#include <stdio.h>

// square
int square(int x) { return x * x; }
// 반환타입 함수이름(함수 인자1, 함수 인자2 ...) {}

// 매크로 상수
#define PI 3.14

// 매크로 함수
#define SQUARE(x) ((x) * (x))
// 1. 호출이 아니라 텍스트 치환입니다.
//   => 호출의 오버헤드가 존재하지 않습니다.
// 2. 주의사항
//   => 치환으로 인해서 의도하지 않은 우선순위에 역전이 발생할 수 있습니다.
//    : 인자로 전달된 부분에 괄호가 필요합니다.
//   => ++x / x++ 같은 부수효과가 두번이상 발생하는 미정의 동작을
//     방어할 수 없습니다.

int main(void)
{
    printf("%lf\n", PI);

    // printf("%d\n", SQUARE(2 + 2));
    //              2 + 2 * 2 + 2

    int x = 2;
    printf("%d\n", SQUARE(++x));
    //             ++x * ++x

    return 0;
}