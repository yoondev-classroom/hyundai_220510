#include <stdio.h>

// 1. 동적 메모리 할당
// > 프로그래머가 원하는 시점에 할당하고, 프로그래머가 원하는 시점에 파괴할 수 있는 메모리.

// 2. malloc / free
//  => stdlib.h 포함
#include <stdlib.h> // malloc, free

// 3. malloc(메모리 사이즈) 형태로 사용하고,
//    할당된 메모리 주소가 반환됩니다.
//    원하는 타입으로 변환해서 사용해야 합니다.
// 4. 더이상 사용하지 않을 경우, free를 통해 해지합니다.
//    free(할당한 주소)
// 5. 메모리 할당과 해지의 비용이 가장 큰 방법입니다.
// 6. 메모리가 부족한 경우, malloc은 NULL(0)을 반환합니다.

int main(void)
{
    // int * 10
    int* p1 = malloc(sizeof(int) * 10);
    if (p1 == NULL) {
        printf("실패\n");
        // return 1;
        exit(1); // stdlib.h
    }

    // double
    double* p2 = malloc(sizeof(double));

    free(p1);
    free(p2);
}
