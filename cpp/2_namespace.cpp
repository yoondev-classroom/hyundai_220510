// 2_namespace.cpp
#include <iostream>

// audio.c

// C: 이름 충돌을 방지하기 위해서,
//    다른 이름을 약속합니다.
//    => 접두
#if 0
void AudioInit() { std::cout << "Audio Init" << std::endl; }

// video.c
void VideoInit() { std::cout << "Video Init" << std::endl; }
#endif

// namespace : 이름공간
// 1. 이름 충돌을 해결할 수 있습니다.
// 2. C++표준이 제공하는 전역함수/전역변수 등은 std 이름 공간안에
//    존재합니다.
// 3. 프로그램의 각 요소를 관련된 요소끼리 그룹화할 수 있습니다.

// audio.cpp
namespace audio {
void init() { std::cout << "Audio Init" << std::endl; }
}

// video.cpp
namespace video {
void init() { std::cout << "Video Init" << std::endl; }
}

int main()
{
    audio::init();
    video::init();
}