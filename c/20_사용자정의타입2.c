
// 상수
#include <stdio.h>

// 프로세스의 상태를 관리해야 합니다.
// #define TASK_READY   0
// #define TASK_RUNNING 1
// #define TASK_STOPPED 2

#if 0
const int TASK_READY = 0;
const int TASK_RUNNING = 1;
const int TASK_STOPPED = 2;

const int THREAD_READY = 0;
const int THREAD_RUNNING = 1;
const int THREAD_STOPPED = 2;

int main(void)
{ 
    int task_state = TASK_READY;
    task_state = 100;
}
#endif

// 열거체
enum task_state {
    TASK_READY = 0,
    TASK_RUNNING,
    TASK_STOPPED
};

int main(void)
{
    // 정수 타입 취급합니다.
    enum task_state state;
    state = TASK_READY;

    printf("%d\n", state);
    state = 100;

    return 0;
}