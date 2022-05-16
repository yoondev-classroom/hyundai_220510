
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL foo()
{
    return TRUE;
    // return FALSE;
}

// C99 - bool 타입 도입
// => C++ bool 타입이 존재합니다.
#if 0
bool goo()
{
    return true;
    // return false;
}

int main()
{
}
#endif