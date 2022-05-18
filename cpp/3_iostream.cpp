#include <iostream>
// C++의 표준입출력 헤더파일입니다.

#include <cstdio>
using namespace std;
// stdio.h
// - 표준 출력: printf
// - 표준 입력: scanf

// iostream
// - 표준 출력: cout
// - 표준 입력: cin
// - 표준 에러: cerr
//------------------------------
// 1. n의 주소를 전달하지 않아도, n의 값이 변경됩니다.
// 2. 서식이 존재하지 않아도, 각 타입에 맞는 값이 입력됩니다.
//  => 함수 오버로딩

// 3. std::cout
//    std::cin
//    std::endl
//    정체는 무엇인가?

int main()
{
    char n[100];
    // scanf("%d", &n);
    // printf("%d\n", n);
    cin >> n;
    cout << n << endl;
}