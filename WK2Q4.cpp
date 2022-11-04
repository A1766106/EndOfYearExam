#include <iostream>

using namespace std;

int* addOneToX(const int& x){
    int res = x+1;
    int *h = new int;
    *h = res;
    return h;
}

int main()
{
    int x = 100;
    int *p = addOneToX(x);
    cout << *p << endl;
    return 0;
}