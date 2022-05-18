// 23_접근지정자.cpp
#include <iostream>
#include <string>
using namespace std;

// 기본 접근지정자
// 1. struct: public
//     class: private
// 2. private은 외부에서 접근이 불가능하고, 오직 멤버 함수를 통해서만 접근이 가능합니다.
//  => 예외
// 3. C++에서는 멤버 함수외에 private 멤버 데이터 / 함수에 접근할 수 있는 문법이 존재합니다.
//  => friend 함수 / 클래스
//     캡슐화 정책을 깨뜨리지 않고 확장할 수 있습니다.

class User {
private:
    string name;
    int age;

public:
    User(const string& s, int a)
    {
        name = s;
        age = a;
    }

    // friend 함수 선언
    friend void PrintUser(const User& user);
};

void PrintUser(const User& user)
{
    cout << user.name << ", " << user.age << endl;
}

int main()
{
    User user { "Tom", 42 };
    PrintUser(user);
}