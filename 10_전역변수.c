// 10_전역변수.c
#include <stdio.h>

// 1. 함수의 밖에 존재하는 변수입니다.
// 2. 프로그램의 시작에 초기화되고, 프로그램이 종료할 때 파괴됩니다.
// 3. 모든 함수에서 접근이 가능합니다.
// 4. 초기화하지 않으면 0으로 초기화됩니다.
// 5. 인자를 전달하지 않아도 접근이 가능하기 때문에,
//    함수의 복잡도를 낮추는데 도움이 됩니다.
// 6. 함수가 전역 변수에 의존할 경우 독립적으로 재사용하기 어렵습니다.

int g = 100;

void foo()
{
    g += 100;
    printf("foo: %d\n", g);
}

void goo()
{
    g -= 100;
    printf("goo: %d\n", g);
}

int main(void)
{
    foo();
    goo();
}