// 2_namespace2.cpp

// C++의 namespace를 사용하는 3가지 방법.

// 1. 전체 이름을 사용하는 방법
// : namespace와 심볼의 이름을 명시합니다.
#if 0
#include <iostream>

int main()
{
    std::cout << "Hello, C++" << std::endl;
    std::cout << "Hello, C++" << std::endl;
    std::cout << "Hello, C++" << std::endl;
}
#endif

namespace audio {
void init() { }
}

namespace video {
void init() { }
}

// 2. using 선언(declaration)
#if 0
#include <iostream>

using std::cout;
using std::endl;

using audio::init;

int main()
{
    init();
    video::init();

    cout << "Hello, C++" << endl;
    cout << "Hello, C++" << endl;
    cout << "Hello, C++" << endl;
}
#endif

// 3. using 지시어(directive)
// : 이름공간 안에 있는 모든 심볼에 암묵적인 접근이 가능합니다.
//  > 현업에서 절대 사용하면 안됩니다.
//  - 이름충돌이 발생할 가능성이 높습니다.
#include <iostream>

using namespace std;
using namespace audio;
using namespace video;

int main()
{
    audio::init();

    cout << "Hello, C++" << endl;
    cout << "Hello, C++" << endl;
    cout << "Hello, C++" << endl;
}