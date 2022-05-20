#include <iostream>
using namespace std;

class AAA
{
  int a;
  int b;
  int c;
};

class BBB : public AAA
{
  int d;
};

int main()
{
  AAA aaa;
  BBB bbb;
}