
#include <stdio.h>
#include <stdlib.h> // abort

// assert

// 오류 메세지를 표현할 때,
// 파일 / 라인 정보 등을 제공하는 것이 좋습니다.
// => 미리 정의된 매크로
//   __LINE__
//   __FILE__
//   __FUNCTION__ / __func__

#if 0
#define XASSERT(expr)                                                                    \
    do {                                                                                 \
        if (!(expr)) {                                                                   \
            fprintf(stderr, "assertion failed: %s, %s:%d\n", #expr, __func__, __LINE__); \
            abort();                                                                     \
        }                                                                                \
    } while (0)
#endif
#include <assert.h>

void print_age(int age)
{
#if 0
    if (age <= 0) {
        fprintf(stderr, "%s:%d(%s) age는 양수이어야 합니다.\n",
            __FILE__, __LINE__, __func__);
        abort();
    }
#endif
    // XASSERT(age > 0);
    assert(age > 0);

    // age는 반드시 양수이어야 합니다.
    printf("age: %d\n", age);
}

#define STATIC_ASSERT(expr) \
    char __static_assert_failed[(expr) ? 1 : -1]

// C11 표준에 _Static_assert(expr, reason)

void foo()
{
    _Static_assert(sizeof(long) == 4, "64bit required!");

    // sizeof(long)이 반드시 4바이트이어야 합니다.
    // assert(sizeof(long) == 4);
    // STATIC_ASSERT(sizeof(long) == 8);
    // 컴파일 타임에 체크가 가능합니다.
    // => static_assert - C++
}

#if 0
int main(void)
{
    // 삼항 연산자
    int n = 10;

    int result;
    if (n > 0)
        result = 100;
    else
        result = 200;

    result = (n > 0) ? 100 : 200;
    // 삼항 연산자

    foo();
    // print_age(-42);

    return 0;
}
#endif