// 36_추상클래스3.cpp
#include <iostream>
using namespace std;

// 1. 블랙박스 카메라의 인터페이스(프로토콜)를 먼저 약속합니다.
//  : 구현을 제공하지 않고, 사용하는 방법만 약속합니다.
//  => "순수 가상 함수"

// 인터페이스: 순수 가상 함수로만 이루어진 추상 클래스
struct BlackBox
{
  virtual void StartRecording() = 0;
  virtual void StopRecording() = 0;

  virtual ~BlackBox() {}
};

// 2. 인터페이스를 이용하는 클래스를 만듭니다.
class Car
{
  BlackBox *cam;

public:
  Car(BlackBox *p) : cam{p} {}

  void Go()
  {
    cam->StartRecording();
  }

  void Stop()
  {
    cam->StopRecording();
  }
};
//----------------

// 3. 모든 카메라의 제작자는 BlackBox 인터페이스를 상속 받아야 합니다.
//  "인터페이스를 상속 한다" 대신 "인터페이스를 구현한다." 라고 합니다.
class Camera : public BlackBox
{
public:
  void StartRecording() override { cout << "Camera Start" << endl; }
  void StopRecording() override { cout << "Camera Stop" << endl; }
};

class HDCamera : public BlackBox
{
public:
  void StartRecording() override { cout << "HDCamera Start" << endl; }
  void StopRecording() override { cout << "HDCamera Stop" << endl; }
};

// 핵심: 인터페이스는 OCP를 만족한다.
//  => 인터페이스를 이용하면 교체 가능한 설계가 만들어집니다.
//  => 약한 결합 / 느슨한 결합
//  => DIP(Dependency Inversion Principle)
//   : 의존관계 역전 원칙
//  - 클라이언트는 구체적인 타입에 의존하는 것이 아니라,
//    추상 클래스나 인터페이스에 의존해야 한다.

// 강한 결합 vs 약한 결합
// 1. 강한 결합
//  Car ------------<> Camera

// 2. 약한 결합 - Design Pattern의 핵심 설계 방식
// Car ------------<> BlackBox
//                       |
//                   ----------
//                   |        |
//                 Camera  HDCamera

int main()
{
  HDCamera cam;
  Car car{&cam};

  car.Go();
  car.Stop();
}