// 25_소멸자.cpp
#include <iostream>
using namespace std;

// 1. 소멸자 함수의 이름은 ~클래스이름() 입니다.
// 2. 반환타입 없고, 반환값도 존재하지 않습니다.
// 3. 소멸자 함수는 오버로딩이 불가능하고, 인자 없는 1개만 만들 수 있습니다.
// 4. 사용자가 소멸자를 제공하지 않으면, 컴파일러가 자동으로 만들어줍니다.
//    "아무일도 하지 않는 소멸자"를 만들어줍니다.
// 5. 소멸자를 반드시 정의해야 하는 경우
//   - 객체 내부에서 메모리를 할당하거나, 파일을 열거나 하는 자원을 사용할 때
//     소멸자를 통해 정리해야 합니다.

class User {
    char* name;

public:
    User()
    {
        name = new char[32];
        cout << "User()" << endl;
    }

    ~User()
    {
        delete[] name;
        cout << "~User()" << endl;
    }
};

// User user;

int main()
{
    cout << "main 시작" << endl;
    User* p = new User;
    {
        // User user;
    }
    delete p;
    cout << "main 종료" << endl;
}