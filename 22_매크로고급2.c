#include <stdio.h>

// 조건부 컴파일
// => #if MSVC_VER > 100
//    #elif MSVC_VER > 50
//    #else
//    #endif

//    #ifdef MSVC_VER
//    #elif defined(MAC_OS)
//    #else
//    #endif

// MSVC_VER
// : MSVC 컴파일러는 위의 매크로가 사전 정의되어 있습니다.
#define MSVC_VER

#ifdef MSVC_VER
#define LOG(x)                \
    do {                      \
        printf("x: %d\n", x); \
        printf("x: %d\n", x); \
    } while (0)
#else
#define LOG(x)                \
    ({                        \
        printf("x: %d\n", x); \
        printf("x: %d\n", x); \
    })
#endif

int main(void)
{
    LOG(100);
    return 0;
}