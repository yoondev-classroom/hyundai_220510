// 19_new.cpp
#include <iostream>
using namespace std;

#include <cstdlib>

// 1. malloc / free는 함수입니다.
// 2. malloc은 인자로 할당하고자 하는 메모리 크기를 받습니다.
//    malloc은 할당된 메모리 주소를 void* 타입으로 반환합니다.
//     - 명시적인 캐스팅이 필요합니다.
// 3. C++은 동적 메모리 할당을 위한 연산자를 제공합니다.
//     new / delete
// 4. new는 타입을 전달합니다.
//    new는 타입의 주소를 반환합니다.
// 5. delete 연산자를 통해 new를 통해 할당한 메모리를 해지합니다.
// 6. new T[size]를 통해 연속된 메모리를 할당할 수 있습니다.
//    주의사항: delete[] 를 사용해야합니다.

struct Point {
    int x;
    int y;
};

int main()
{
    // Point* p3 = static_cast<Point*>(malloc(sizeof(Point)));
    // free(p3);

    // int* p = static_cast<int*>(malloc(sizeof(int)));
    // free(p);
    // int* p2 = static_cast<int*>(malloc(sizeof(int) * 10));
    // free(p2);

    Point* p3 = new Point;
    delete p3;

    int* p = new int;
    *p = 42;
    cout << *p << endl;
    delete p;

    int* p2 = new int[10];
    delete[] p2; // 연속된 메모리를 해지하는 연산자 형태입니다.
}
