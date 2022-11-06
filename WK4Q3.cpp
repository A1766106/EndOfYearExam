#include <iostream>

using namespace std;

class A{
    private:
        int _x;
    public:
        A(int x){
            _x = x;
        }
};

int main(){
    A a(5);
    cout << a._x << endl;
    return 0;
}