// 25_소멸자2.cpp
#include <iostream>
using namespace std;

class User
{
private:
    ~User()
    {
        cout << "~User()" << endl;
    }

public:
    User()
    {
    }

    void Destroy()
    {
        // this: 멤버 함수에서 자기 자신의 주소를 얻을 수 있습니다.
        // delete this;
        // 1) 소멸자 호출
        // 2) 메모리 해지
    }
};

// private 소멸자
// 1. 전역 객체 생성 불가
// 2. 지역 객체 생성 불가

// 의도: 객체 생성을 힙에만 가능하도록 하겠다.

// User user;
int main()
{
    {
        // User u;
        // 1. 지역 메모리 할당
        // 2. 생성자 호출 코드
        // ------------

        // User::~User()
    }

    User *p = new User;

    // delete p; => 함수를 약속합니다.
    // 소멸자 호출 -> private
    // 메모리 해지

    // (*p).Destroy(p);
    // p->Destroy(p);
    p->Destroy();
}
// User::~User()