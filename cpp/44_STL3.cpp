// 44_STL3.cpp
#include <iostream>
using namespace std;

#include <list>
#include <vector>

// STL에서 반복자를 꺼내는 방법
//  v.begin() / begin(v)
//  v.end()  / end(v)
int main()
{
  vector<int> v = {10, 20, 30};
  // list<int> v = {10, 20, 30};
  // int v[3] = {10, 20, 30};

  auto p = begin(v);
  while (p != end(v))
  {
    cout << *p << endl;
    ++p;
  }
}