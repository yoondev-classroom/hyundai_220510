#include <iostream>
#include <string>
using namespace std;

class User
{
public:
  User &SetName(const string &name) { return *this; }
  User &SetAge(int age) { return *this; }
  User &SetAddress(const string &address) { return *this; }

  User *Foo() { return this; }
};

int main()
{
  User user;
  user.SetAddress("Seoul");
  user.SetAge(42);
  user.SetName("Tom");

  user.SetAddress("Seoul")
      .SetAge(42)
      .SetName("Tom");
}