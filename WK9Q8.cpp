#include <iostream>
#include <vector>
using namespace std;

template <class T>
struct Point{
    T _x = 0;
    T _y = 0;
};

int main(){
    vector<Point<int>> v;
    Point<int> p;
    v.push_back(p);
    cout << v.size() << endl;
}