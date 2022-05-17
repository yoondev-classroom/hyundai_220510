#include <iostream>
using namespace std;

// 성공하였을 경우, 0
// 실패하였을 때 1
int foo()
{
    return 0;
}

// 실패하였을 경우, NULL을 반환합니다.
void* goo()
{
    return NULL;
}

// C++17
// : if-statement with initializer
// - 조건문에서만 유효한 변수를 정의할 수 있습니다.
//   : if, switch
#if 1
int main()
{
    switch (int n = 10; n) {
    case 0:
        break;
    case 1:
        break;
    default:
        printf("n: %d\n", n);
    }

    if (int ret = foo(); ret != 0) {
        cerr << "error!" << endl;
    }

    if (void* ret = goo(); ret == NULL) {
        cerr << "error!" << endl;
    }
}
#endif

#if 0
int main()
{
    int ret = foo();
    if (ret != 0) {
        cout << "error!" << endl;
    }

    void* ret2 = goo();
    if (ret == NULL) {
        cout << "error!" << endl;
    }
}
#endif
