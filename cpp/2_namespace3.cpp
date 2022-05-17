// 2_namespace3.cpp

#include <iostream>
// C++ 표준의 모든 심볼은 std 이름공간에 존재합니다.

// #include <stdio.h>
#include <cstdio>
// C의 헤더를 C++에서 사용할 때, c의 접두를 가지고 있는,
// .h의 확장자가 없는 버전을 사용하는 것이 권장됩니다.
// => 일관성 있는 헤더 파일 형태, std 이름 공간

#if 0
namespace std {
#include <stdio.h>
}

#endif

int main()
{
    std::printf("Hello, world\n");
}
