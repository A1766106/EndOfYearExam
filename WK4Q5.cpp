#include <iostream>

using namespace std;

class A{
    private:
        int _x;
    public:
        A(int x): _x(x){};
        A():A(0){}
        int get_x(){return _x;}
};

int main(){
    A a;
    cout << a.get_x() << endl;
    return 0;
}