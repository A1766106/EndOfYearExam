#include <iostream>

using namespace std;

int main(){
    int rows = 2, cols = 2;
    int* *a = new int*[rows];

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout << a[i][j] << " ";
        }
    }
    return 0;
}

