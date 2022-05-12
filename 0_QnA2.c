// 2_QnA2.c
#include <stdio.h>

// 비트연산자
// 1. &
//  => 마스크
// 2. |
//  => 비트 더하기
// 3. ^
//  => XOR
//   - 같으면 0, 다르면 1
//   : 토글
// 4. ~ (1의 보수)
//  => 반전
// 5. <<
//    >>
//    signed
//  unsigned

// 1000 1100 >> 2
// unsigned: 0010 0011
//  => Logical Shift
//   signed: 1110 0011  (부호비트로 채워집니다.)
//  => Arithmatic Shift

int main(void)
{
    short n = 0x7a42;
    // 0111 1010 0100 0010

    printf("%d\n", n);

    return 0;
}