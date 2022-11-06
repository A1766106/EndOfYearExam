#include <iostream>
using namespace std;

class A{
    public:
        void fun(){cout <<"A::fun() called ";}
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
    C c;
    B* b = &c;
    b->fun();
    return 0;

}