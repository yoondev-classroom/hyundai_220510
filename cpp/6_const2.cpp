#include <pthread.h>
#include <stdio.h>

// const-volatile 제한자
// - const: 값의 변경이 없다. 최적화 가능하다.
// - volatile: 값의 변경이 발생한다. 메모리로부터 읽어와라.(최적화 금지)

// 메모리 가시성 문제
// => 변수의 값을 메모리로부터 읽어오는 것이 아니라,
//    최적화된 코드가 CPU 레지스터를 통해 접근하도록 처리하고 있기 때문에
//    메모리의 변화를 감지할 수 없는 문제.
void* foo(void* p)
{
    volatile int* pn = (int*)p;
    while (*pn) {
        // thread job
    }

    printf("foo end...\n");
    return 0;
}

int main()
{
    int n = 1;

    pthread_t thread;
    pthread_create(&thread, 0, &foo, &n);

    getchar();
    n = 0;
    pthread_join(thread, 0);

    printf("program end...\n");
}