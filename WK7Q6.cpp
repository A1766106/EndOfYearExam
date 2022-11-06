#include <iostream>
#include <string>

using namespace std;

class Shape{
    public:
        virtual float get_area() = 0;
};

class Circle: public Shape{
    private:
        float r =10;
    public:
        float get_area(){return r*r*3.14;}
};

void print_shape(Shape* s){
    std::cout << s->get_area() << std::endl;
}

int main(){
    Shape* s[2];
    s[0] = new Circle();
    s[1] = new Shape();
    print_shape(s[0]);
    return 0;
}
