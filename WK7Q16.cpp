#include <iostream>
using namespace std;

class A{
    public:
        virtual void fun() = 0;
};
class B: public A{
    public:
        void fun() {cout << " B::fun() called ";}
};
class C: public B {
    public:
        void fun() {cout << "C::fun() called ";}
};

int main(){
    C* c = new B;
    c->fun();
    return 0;

}