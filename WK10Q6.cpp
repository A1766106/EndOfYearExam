#include <iostream>

using namespace std;

class Fun
{
    int i;
    public:

        static void InFun()
        {
            cout << "Fun ";
        }
};

int main()
{
    Fun::InFun();
    return 0; 
}