#include <stdio.h>

// #토큰 => "토큰"

// 토큰1##토큰2
//  => 토큰1토큰2
//  => 두 개 토큰을 하나의 토큰으로 만들어줍니다.
//  => 매크로를 이용해서 특정한 심볼을 생성하거나 참조하는 목적으로 사용합니다.

#define PRINT_VALUES(x) \
    printf("%d %d\n", x##1, x##2)

// "aaa""bbb" => "aaabbb"

#define FOO(func) \
    void foo##_##func() { printf(#func "\n"); }

FOO(test)
// void foo_test() { printf("test" "\n"); }

int main(void)
{
    foo_test();

    int value1 = 10;
    int value2 = 20;

    PRINT_VALUES(value);
    // printf("%d %d\n", value1, value2);

    return 0;
}