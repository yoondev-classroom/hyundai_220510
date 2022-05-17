// test.cpp
// - C++ 코드입니다.
// : 함수의 인자 정보가 이름에 포함됩니다.
//   함수의 반환 타입 정보는 이름에 포함되지 않습니다.

// 0000000100003f94 T __Z3fooi
// 0000000100003f8c T __Z3foov
// 0000000100003f70 T __Z3fooiid

void foo(int a, int b, double c) { }

int foo() { return 0; }
// __Z3foov

void foo(int a) { }
// __Z3fooi

int main() { }