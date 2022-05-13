#include <stdio.h>

#if 0
// call by value
void inc1(int n)
{
    ++n;
}

// call by reference / call by pointer
void inc2(int* p)
{
    // *p += 1;
    ++(*p);
}

int n = 10;
void inc()
{
    ++n;
}

int main(void)
{
    inc1(n);
    // inc2(&n);

    printf("%d\n", n); // 10

    return 0;
}
#endif

#if 0
int age;
int nAge; // 헝가리안 표기법

int n = 10;
// int n = 20; // 심볼 충돌 / 이름 충돌

// printf("%d", n);

int main(void)
{
    int n = 20; // ok!

    {
        static int n = 30;
        printf("%d\n", n); // ?
    }
    printf("%d\n", n); // ?
}
#endif

// printf - (format)
// * 서식을 지정하고, 서식에 대한 값(변수)를 인자로 나열하는 형태로 사용합니다.
//  %d: decimal(10진수)
//  %x,X: hex(16진수)
//  %c: 문자(ascii)
//  %f: float
//  %lf: double
//  %p: pointer(주소)
//  %s: string(문자열) => char 배열인데 널문자로 종료하는 문자열
//  - Linux(long: 8byte) /
//  %ld: long 정수 출력  => offset(포인터 - 포인터)
//  %lu: unsigned long 정수 출력 => sizeof
//  - Windows(long: 4byte) / (long long: 8byte)
//  %lld: long long 정수 출력  => offset(포인터 - 포인터)
//  %llu: unsigned long long 정수 출력 => sizeof

void print_str(const char* s)
{
    // while (*s != '\0') {
    while (*s) {
        printf("%c", *s++);
        // s++;
    }
    printf("\n");
}

int main(void)
{
    int n = 0xaf;
    printf("%x %X\n", n, n);

    char str[] = "hello";
    printf("%lu\n", sizeof(str)); // 6

    print_str(str);

    return 0;
}