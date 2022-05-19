
#include <iostream>
using namespace std;

class Test {
    int data = 10;

public:
    // void f1(Test* const this)
    void f1() { cout << "f1" << endl; }

    // int f2(Test* const this)
    int f2()
    {
        cout << "f2" << endl;

        if (this)
            return data;

        return 100;

        // return this->data;
        // return (*this).data;
    }
};

int main()
{
    Test* p = nullptr;
    p->f1(); // f1(p);

    p->f2(); // f2(p);
}