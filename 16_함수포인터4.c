// 복잡한 함수 포인터
#include <stdio.h>

// void a(void) { }
// void (*)(void)
// int f(int a) { }
// int (*)(int)

// int (*foo(void))[3];
// int (*(*)(void))[3];

#if 0
int (*foo(void))[3]
{
    static int x[3] = { 10, 20, 30 };
    return &x;
    // int(*)[3]
}

int (*(*goo(void))(void))[3]
{
    return &foo;
}

int main(void)
{
}
#endif

// int (*(*goo(void))(void))[3]
// 1. goo(void)
// => goo는 인자 없는 함수입니다. 반환 타입은?
// 2. *goo(void)
// => 반환 타입은 포인터를 반환합니다. 포인터가 참조하는 대상체의 타입은?
// 3. (*goo(void))(void)
// => 포인터가 가르키는 타입은 인자 없는 함수입니다. 함수의 반환 타입은?
// 4. (*(*goo(void))(void))
// => 함수의 반환 타입은 포인터 입니다. 포인터가 참조하는 대상체의 타입은?
// 5.  (*(*goo(void))(void))[3]
// => 포인터가 가르키는 타입은 3개짜리 배열입니다. 하나의 원소타입은?
// 6.  int (*(*goo(void))(void))[3]
// => 배열의 원소타입은 int 입니다.

typedef int (*PARR3)[3];

// int (*foo(void))[3]
PARR3 foo(void)
{
    static int x[3] = { 10, 20, 30 };
    return &x;
    // int(*)[3]
}

typedef PARR3 (*PFOO)(void);

// PARR3 (*goo(void))(void)
PFOO goo(void)
{
    return &foo;
    // PARR3 (*)(void)
}

int main(void)
{
}