// 36_추상클래스2.cpp
#include <iostream>
using namespace std;

// 1. 새로운 클래스가 도입되어도, 기존 코드는 수정되면 안된다.
// => OCP

class HDCamera
{
public:
  void StartRecording() { cout << "HDCamera Start" << endl; }
  void StopRecording() { cout << "HDCamera Stop" << endl; }
};

class Camera
{
public:
  void StartRecording() { cout << "Camera Start" << endl; }
  void StopRecording() { cout << "Camera Stop" << endl; }
};

// 2. 원인
//  - Car 클래스가 Camera 타입에 강하게 의존하고 있습니다.
//  "강한 결합"
//  - 구체적인 타입에 의존하면, 교체가 불가능합니다.

class Car
{
  Camera *cam;

public:
  Car(Camera *p) : cam{p} {}

  void Go()
  {
    cam->StartRecording();
  }

  void Stop()
  {
    cam->StopRecording();
  }
};

int main()
{
  Camera cam;
  Car car{&cam};

  car.Go();
  car.Stop();
}