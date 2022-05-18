// 22_STL.cpp
//  Standard Template Library
//  - C++ 표준에서 제공하는 템플릿 기반 라이브러리 입니다.

// 1. 컨테이너(컬렉션) / 자료구조
//   - 선형 자료구조
//     array(연속된 메모리, 크기가 고정)
//     vector(연속된 메모리, 크기가 동적으로 증가)
//     deque(어중간한 선형구조)
//     --
//     장점: 임의 접근 효율적
//          O(1)
//     단점: 중간 데이터 삽입/삭제 비효율적
//          O(N)
//          v.push_front(10); <- 지원 X

//     list(노드 구조 메모리)
//     장점: 중간 데이터 삽입/삭제 효율적
//          O(1)
//     단점: 임의 접근 비효율적
//          O(N)
//          v[10] <- 연산 지원 X

//   - 관계형 자료구조
//    => 탐색을 위해서 사용합니다.
//     이진 트리
//        map / set
//      - 탐색: O(logN)
//      - 다양한 활용이 가능합니다.
//        정렬된 데이터: O(N)
//     해시 테이블
//        unordered_map / unordered_set
//      - 탐색: O(1)
//      - 정렬된 데이터가 필요한 경우, 별도 정렬을 수행해야 합니다.
//         O(N*logN)

//   - 우선순위 큐
//    : stack, queue

// 2. 알고리즘
//  - 데이터를 검색하거나, 정렬하거나, 연산하는 함수 집합

// 3. 반복자
//  - 수업시간에 배웁니다.

#include <iostream>
#include <stack>
using namespace std;

// stack: 클래스 템플릿입니다.
//  - push
//  - pop의 연산이 분리되어 있습니다.
//    pop(): 스택에 있는 요소를 제거합니다.
//    top(): 스택의 마지막 데이터를 반환합니다.
#if 0
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();
}
#endif

#include <list>
#include <vector> // 동적 배열

int main()
{
    list<int> v = { 10, 20, 30 }; // C++11
    cout << v.size() << endl;

    // for (int i = 0; i < 3; ++i)
    //     cout << v[i] << endl;

    for (auto e : v)
        cout << e << endl;

    // v.push_front(20);
}

#if 0
int main()
{
    // vector<int> v;
    // v.push_front(200); // vector에서는 사용이 불가능합니다.
    // v.reserve(10);

    cout << v.size() << " / " << v.capacity() << endl;

    v.push_back(10);
    cout << v.size() << " / " << v.capacity() << endl;

    v.push_back(20);
    cout << v.size() << " / " << v.capacity() << endl;

    v.push_back(30);
    cout << v.size() << " / " << v.capacity() << endl;
    v.push_back(30);
    cout << v.size() << " / " << v.capacity() << endl;
}
#endif