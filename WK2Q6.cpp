#include <iostream>

using namespace std;

int main(){
    int a[2][3] = {{11,12,13}, {21,22,23}};

    for(int i=0;i<2;i++){
        std::cout << *(a[i]) << endl;
    }
    return 0;
}

