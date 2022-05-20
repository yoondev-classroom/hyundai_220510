// 34_상속.cpp
#include <iostream>
#include <string>
using namespace std;

#if 0
class Student
{
private:
  string name_;
  string id_;
  int major_;

public:
  Student(const string &name, const string &id, int major)
      : name_{name}, id_{id}, major_{major} {}

  string GetName() const { return name_; }
  string GetId() const { return id_; }
  int GetMajor() const { return major_; }
};

class Teacher
{
private:
  string name_;
  int major_;
  int age_;

public:
  Teacher(const string &name, int major, int age)
      : name_{name}, major_{major}, age_{age} {}

  string GetName() const { return name_; }
  int GetMajor() const { return major_; }
  int GetAge() const { return age_; }
};
#endif

// 공통의 속성(멤버 변수)
// 공통의 행위(멤버 함수)
// 를 별도의 클래스를 뽑아내고,
// "상속"의 문법을 통해서 물려줄 수 있습니다.

class Person
{
private:
  string name_;
  int major_;

public:
  Person(const string &name, int major)
      : name_{name}, major_{major} {}

  string GetName() const { return name_; }
  int GetMajor() const { return major_; }
};

class Student : public Person
{
private:
  string id_;

public:
  Student(const string &name,
          int major,
          const string &id)
      : Person{name, major}, id_{id} {}

  string GetId() const { return id_; }
};

class Teacher : public Person
{
private:
  int age_;

public:
  Teacher(const string &name, int major, int age)
      : Person{name, major}, age_{age} {}

  int GetAge() const { return age_; }
};

int main()
{
}