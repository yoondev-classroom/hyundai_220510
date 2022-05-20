// test.h
#ifndef TEST_H
#define TEST_H

// 선언 관련 정보가 헤더파일에
// 있습니다.
void foo();
extern int a;
struct AAA
{
};

// C++
// : 인라인 함수
//   템플릿은 반드시 헤더파일에 존재해야 합니다.
// 이유
// - 컴파일 타임에 구현을 알고
//   있어야 합니다.

#endif