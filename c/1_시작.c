// https://github.com/yoondev-classroom/hyundai_220510
#include <stdio.h>

// 1. 컴파일러
//  - Microsoft C/C++ Compiler: cl.exe
//  - GNU C/C++ Compiler: gcc
//  - LLVM Compiler: clang

// 2. 실행파일이 만들어지는 과정
// a.c                         -> compile  -> a.o / a.obj
// b.c => preprocess(전처리) =>  -> compile  -> b.o / b.obj => Link => a.exe / a.out
// c.c    : 텍스트 병합 / 치환     -> compile   -> c.o / c.obj

#define PI 3.14

// 3. main 함수
//  > 프로그램의 시작 함수
//  1. int main(void)
//    return 0; -> 프로그램의 성공적인 수행을 의미합니다.
//    return 0이 아닌 값 -> 프로그램이 성공적으로 수행되지 않았음을 의미합니다.
//  2. int main()
//  3. void main() : 권장하지 않습니다.
//  4. int main(int argc, char** argv)
//     int main(int argc, char* argv[])

void foo() { }
void goo(void) { }

int main(void)
{
    // foo(10);
    // goo(10);

    printf("Hello, world\n");
    printf("PI: %lf\n", PI);
    return 0;
}