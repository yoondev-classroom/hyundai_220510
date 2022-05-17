// 1_시작.cpp

// 1.  C 확장자 - .c
//   C++ 확장자 - .cpp, .cc, .C, .cxx ..

// 2. C++ 컴파일러
//   MSVC / GCC / LLVM

// 3. C++ 표준
//   C++98/03: 1.0
//   C++11/14: 2.0 => Modern C++
//   C++17/20: 3.0

// 4. C++ 표준안에 C 표준이 존재합니다.
//  => C++ 표준 안의 C와 C표준은 다릅니다.

#if 0
#include <stdio.h>

int main(void)
{
    printf("Hello, world\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf("Hello, world\n");

    // return 0;
    // > C++ 컴파일러가 자동으로 처리해줍니다.
}
#endif

#include <iostream>
// C++ 표준 입출력 헤더파일입니다.
//  : 헤더 파일의 확장자가 없는 경우도 많습니다.

int main()
{
    std::cout << "Hello, C++" << std::endl;

    int n = 10;
    double d = 3.14;
    char ch = 'X';

    std::cout << n << std::endl;
    std::cout << d << std::endl;
    std::cout << ch << std::endl;
}