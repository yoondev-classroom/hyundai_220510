// 18_casting.cpp
#include <cstdlib> // malloc, free
#include <iostream>
using namespace std;

// 1. void*
//   - 다른 포인터 타입으로 변환할 때 사용합니다.
// 2. 메모리를 다른 타입으로 재해석할 때
//   > 주의해야 합니다.
// - C의 캐스팅은 위험하다.
//   : 의도를 파악하기 어렵다.

#if 0
int main()
{
    int x = 0x12345678;
    double* p2 = (double*)&x;

    // C++은 명시적인 캐스팅이 필요합니다.
    int* p = (int*)malloc(sizeof(int));
    *p = 100;

    cout << *p << endl;
}
#endif

// C++의 캐스팅
// > 의도를 파악하기 쉽도록, 캐스팅을 4가지 연산자로 제공합니다.
// 1. static_cast
//   => 가장 기본적인 C++의 캐스팅 연산자 입니다.
//      연관성 있는 타입간의 캐스팅에 활용됩니다.
//      컴파일 타임에 캐스팅을 수행하기 때문에, static_cast라고 합니다.

// 2. reinterpret_cast
//   => 메모리를 재해석할 때 사용합니다.

// 3. const_cast
//   => 메모리의 상수성을 제거하는 목적으로 사용합니다.
//   : 타입의 불일치 문제를 해결하는 목적으로 사용합니다.
//   => const / volatile

// 4. dynamic_cast
//  :

void foo(int* p)
{
    cout << *p << endl;
}

int main()
{
    int x[5] = { 1, 21, 3, 4, 5 };
    int sum = 0;
    for (auto e : x) {
        sum += e;
    }

    double avg = static_cast<double>(sum) / (sizeof(x) / sizeof(x[0]));
    cout << avg << endl;

    volatile int n3 = 0;
    // &n3: volatile int*
    foo(const_cast<int*>(&n3));

    const int n2 = 100;
    // &n2: const int*
    // int* pn2 = static_cast<int*>(&n2);  - error!
    // int* pn2 = reinterpret_cast<int*>(&n2); - error!
    int* pn2 = const_cast<int*>(&n2);
    foo(pn2);

    // char* p = static_cast<char*>(&n); - error!
    int n
        = 0x12345678;
    char* p = reinterpret_cast<char*>(&n);

    // void* p = malloc(sizeof(int));
    // int* pn = static_cast<int*>(p);
    int* pn = static_cast<int*>(malloc(sizeof(int)));

    *pn = 100;
    cout << *pn << endl;
}