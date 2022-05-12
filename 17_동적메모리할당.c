// 17_동적메모리할당.c
#include <stdio.h>
// printf / scanf

#include <stdlib.h>
// malloc / free

// 라이브러리
// => 함수의 집합

// 1. 전역 변수
//   - 프로그램 시작 - 끝
// 2. 지역 변수
//   - 함수 시작 - 끝
// 3. 정적 지역 변수
//   - 함수 시작 - 프로그램 끝
// 4. 동적 메모리 할당(Dynamic Memory Allocation)
//   - 프로그래머가 원하는 시점에 생성하고, - malloc
//     프로그래머가 원하는 시점에 파괴할 수 있습니다. - free
//   => stdlib.h 헤더 파일을 포함해야 합니다.
// 5. malloc(메모리 사이즈)
//   : 함수의 결과로 할당된 메모리의 주소를 반환합니다.
// 6. malloc을 통해 할당한 메모리를 더 이상 사용하지 않을 경우, 반드시
//    free를 통해 반납해야 합니다.
#if 0
int main(void)
{
    // 4바이트가 필요합니다.
    int* p = malloc(sizeof(int));
    *p = 100;
    printf("%d\n", *p);

    char* p2 = malloc(sizeof(char) * 4);
    p2[0] = 10;
    p2[1] = 20;
    p2[2] = 30;
    p2[3] = 40;

    for (int i = 0; i < 4; ++i) {
        printf("%d\n", p2[i]);
    }

    return 0;
}
#endif

// System Api => 운영체제 따라 다릅니다.
//  => Sleep(1000) - Windows.h
//  => sleep(1)    - unistd.h
#include <unistd.h>

int main(void)
{
    // while (1) {
    int* p = malloc(100000000000L);
    printf("%p\n", p);
    // 메모리가 부족한 경우, NULL을 반환합니다.
    // => malloc은 실패의 가능성이 존재하기 때문에, 반드시 반환값을 확인해야 합니다.
    usleep(1000);
    // }

    return 0;
}