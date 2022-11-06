#include <iostream>

using namespace std;

class B{
    private:
        int* _id;
    public:
        B(int id){*_id = id;}
        B():B(0.5){}
        int get_id(){return *_id;}
        void set_id(int id){*_id = id;}
        ~B(){delete _id;}
};

class A{
    private:
        B b;
    public:
        A() {cout << this->b.get_id() << endl;}
        ~A(){}
};

int main(){
    A a;
    return 0;
}