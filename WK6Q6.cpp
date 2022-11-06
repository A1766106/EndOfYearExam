#include <string>
#include <iostream>

using namespace std;

class A{
    public:
        virtual void foo(){cout << "This is A\n";}
};
class B: public A{
    public:
        void fun1(){cout << "this is fun1 in B\n";}
};

int main()
{
    B b;
    b.foo();
    return 0;
}