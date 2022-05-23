// 39_스마트포인터.cpp
#include <iostream>
using namespace std;

class Image
{
public:
  Image() { cout << "Image 객체 생성" << endl; }
  ~Image() { cout << "Image 객체 소멸" << endl; }

  void Draw() { cout << "Image draw" << endl; }
};

// 포인터의 역활을 수행하는 클래스를 설계합니다.
#if 0
class Ptr
{
  Image *obj;

public:
  Ptr(Image *p) : obj(p) {}
  ~Ptr() { delete obj; }
  // 핵심: 소유한 자원을 자동으로 파괴해줍니다.
  //    : 연산자 오버로딩을 통해서 진짜 포인터처럼 사용할 수 있도록 해줍니다.
  Image &operator*() { return *obj; }
  Image *operator->() { return obj; }
};
#endif

template <typename TYPE>
class Ptr
{
  TYPE *obj;

public:
  Ptr(TYPE *p) : obj(p) {}
  ~Ptr() { delete obj; }
  // 핵심: 소유한 자원을 자동으로 파괴해줍니다.
  //    : 연산자 오버로딩을 통해서 진짜 포인터처럼 사용할 수 있도록 해줍니다.
  TYPE &operator*() { return *obj; }
  TYPE *operator->() { return obj; }
};

int main()
{
  Ptr<int> p2 = new int;

  // Image *p = new Image;
  Ptr<Image> p = new Image;

  p->Draw();
  // (p.operator->())->Draw();

  (*p).Draw();
  // p.operator*()
}

#if 0
int main()
{
  Image *p = new Image;
  p->Draw();

  delete p;
}
#endif