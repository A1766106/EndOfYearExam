#include <iostream>

using namespace std;

void addOneToX(int x){
    x = x+1;
}

int main()
{
    int x = 100;
    addOneToX(x);
    cout << x << endl;
    return 0;
}

