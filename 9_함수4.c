#include <stdio.h>

// 인자로 전달된 정수에 대해서 입력값 - 1까지의 합을 구하는 함수를 만들어보세요.
// 입력: 인자타입 - int
// 결과: 반환값타입 - int
int sum(int n)
{
    int ret = 0;
    for (int i = 1; i < n; i++) {
        // ret = ret + i;
        ret += i;
    }

    return ret;
}

int main(void)
{
}