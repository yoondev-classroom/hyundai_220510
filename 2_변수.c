// 2_변수.c
#include <stdio.h>

// 변수(variable)
// 1. 메모리에 저장하는 실행시간에 변경가능한 값
// 2. 전역 변수
//  - 프로그램이 시작될 때 초기화되고, 끝날 때까지 존재하는 변수
//  - 실행 파일의 크기가 커집니다.
//  - 초기화하지 않는 경우, 0으로 자동으로 초기화됩니다.

// 3. 지역 변수
//  - 함수의 시작에 초기화되고, 함수가 종료되면 사라집니다.
//  - 초기화하지 않으면, 쓰레기값을 가지고 있습니다.
//  - 초기화가 중요합니다.

// 4. 정적 지역 변수 / 내부 정적 변수
//  - 함수의 시작에 초기화되고, 프로그램이 종료될 때까지 유지됩니다.
//  - static: 기억 부류 지정자

// 5. 전역 변수/함수(static)
// - static: 통용 범위 지정자
//           internal linkage를 갖는다.
//           같은 파일에서만 접근이 가능합니다.

// - extern: external linkage을 갖는다.
//           다른 파일에서 접근이 가능하다.

// 6. 동적 메모리 할당 변수
// - malloc / free
// - 프로그래머가 원하는 시점에 생성하고, 프로그래머가 원하는 시점에 파괴할 수 있습니다.
// - free를 잊을 경우, 메모리 누수 문제점이 있습니다.
// - 할당/해지의 오버헤드가 존재합니다.
#if 0
int g1; // 전역 변수
static int g2;
// extern int g;

int main()
{
    int a; // 지역 변수
    static int b; // 정적 지역 변수, 내부 정적 변수

    printf("a: %d\n", a);

    return 0;
}
#endif
// 7. 타입
// => 타입의 크기에 따라서 메모리 할당 크기가 결정됩니다.
//  - 64bit
//       char   - 1byte
//      > 부호가 있는지 없는지는 컴파일러마다 다릅니다.
//     : signed char: -128 ~ 127
//     : unsigned char: 0 ~ 255

//    short  - 2byte
//    int    - 4byte
//    long      - 4byte(Windows) / 8byte(Linux)
//    long long - 8byte

#if 0
#include <stdint.h>

int main()
{
    char c;

    int32_t a;
    int64_t b;

    printf("%lu\n", sizeof(long long));
    return 0;
}
#endif

//    float - 4byte
//    double - 8byte
//   > 부동 소수점 타입
//    - 오차가 있습니다.
//    - 동등성 비교가 불가능합니다.
int main()
{
    double a = 0.7;
    double b = 0.1 * 7;

    if (a == b) {
        printf("같다\n");
    } else {
        printf("다르다\n");
    }

    return 0;
}