#include <iostream>
#include <string>

using namespace std;

struct Point{
    int x;
    int y;
};

class A{
    protected:
        Point* _c;
    public:
        A(){_c = new Point{0,0};}
        virtual ~A(){delete _c;
        cout << "point c deleted\n";}
};
class B: public A{
    private:
        Point* _d;
    public:
        B(){_d = new Point{0,0};}
        ~B(){delete _d;
        cout << "point d deleted\n";}
};
int main(){
    A* obj = new B();
    delete obj;
    return 0;
}