#include <iostream>

using namespace std;

int* addOneToX(int* p){
    *p = *p+1;
    return &p;
}

int main()
{
    int x = 100;
    int *p = addOneToX(&x);
    cout << *p << endl;
    return 0;
}