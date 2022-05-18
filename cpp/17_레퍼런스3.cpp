#include <iostream>
#include <string>
using namespace std;

struct User {
    string name;
    int age;
    string address;
};

// 1. 사용자 정의 타입(struct)에 대해서 인자를 전달할 때 복사를 하면
//    오버헤드가 있습니다.
//    C: const User* user
//  C++: const User& user

#if 0
void PrintUser(User user)
{
    cout << user.name << ", " << user.age << ", " << user.address << endl;
}
#endif
void PrintUser(const User* user)
{
    // (*user).name
    cout << user->name << ", " << user->age << ", " << user->address << endl;
}

void PrintUser(const User& user)
{
    cout << user.name << ", " << user.age << ", " << user.address << endl;
}

int main()
{
    cout << sizeof(User) << endl;

    User user { "Tom", 42, "Suwon" };
    PrintUser(user);
    PrintUser(&user);
}