#include <iostream>
using namespace std;

class A{
    public:
    virtual int fun() =0;
};
class B: public A{
    public:
        int fun() {cout << "B::fun() called "; return 1;}
};
class C: public B {
    public:
        int fun() {cout << "C::fun() called ";return 2;}
};

int main(){
    A* a = new C;
    a->fun();
    return 0;

}