// 3_iostream2.cpp

#include <iomanip>
#include <iostream>
using namespace std;

// 077                => 8진수 상수
// 0xFAFA             => 16진수 상수
// 0b1111101011111010 => 2진수 상수(C++11)

// IO 조정자
//  hex, uppercase, nouppercase, dev    - iostream
//  setw, setfill                       - iomanip

int main()
{
    // int n = 0xFAFA;
    // 1111 1010 1111 1010

    int n = 0b1111101011111010;
    cout << n << endl;

    printf("%x\n", n);
    cout << hex << n << endl;

    printf("%X\n", n);
    cout << hex << uppercase << n << endl;

    printf("%x %X %x\n", n, n, n);
    cout << hex << nouppercase << n << uppercase << n << nouppercase << n << endl;

    printf("%10d\n", n);
    cout << setw(10) << dec << n << endl;

    printf("%010d\n", n);
    cout << setw(10) << setfill('0') << n << endl;
}