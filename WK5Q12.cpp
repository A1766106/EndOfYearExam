#include <iostream>

using namespace std;

class A{
    private:
        int x,y;
    public:
        A(int _x=0, int _y = 0): x(_x), y(_y) {}
};
class B: public A{
    public:
        void show(){
            cout << "x = "<<x<< " y = "<<y;
        }
};
int main(void){
    B b;
    b.show();
    return 0;
}