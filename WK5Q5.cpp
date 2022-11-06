#include <iostream>

using namespace std;

class A{
    protected:
        int x;
    public:
        A() {x = 10;}
};

class B: public A{
    protected:
        int y;
    public:
        B(){y = 2;}
};

class C:public A, public B {
    private:
        int z;
    public:
        C() {z=2;}
        double get_result() {return x*z;}
};

int main(){
    C c;
    cout << c.get_result() << endl;
}
