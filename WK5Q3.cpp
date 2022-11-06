#include <iostream>

using namespace std;

class A{
    protected:
        int _a;
    public:
        A(int a): _a(a){}
        A():A(100){}
        void say_hi(){cout << "Hi! I am A\n";}
};
class B: public A{
    private:
        double _r;
    public:
        B():_r(1){}
        void say_hi(){cout <<"Hi! I am B\n";}
};

int main(){
    B b;
    b.say_hi();
    return 0;
}