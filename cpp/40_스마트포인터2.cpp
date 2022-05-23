// 40_스마트포인터2.cpp
#include <iostream>
using namespace std;

class Image
{
public:
  Image() { cout << "Image 객체 생성" << endl; }
  ~Image() { cout << "Image 객체 소멸" << endl; }

  void Draw() { cout << "Image draw" << endl; }
};

#include <memory>
// : 이 안에 잘 정의된 스마트포인터가 존재합니다.
// 1) shared_ptr<>
// 2) unique_ptr<>

int main()
{
  // Copy Initialization 허용하지 않습니다.
  unique_ptr<Image> p{new Image};

  p->Draw();
  (*p).Draw();
}