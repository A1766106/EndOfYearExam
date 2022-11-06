#include <iostream>

using namespace std;

class Fun
{
    int i;
    public:
        Fun()
        {
            i = 0;
            cout << "Constructor ";
        }
        ~Fun()
        {
            cout << "Destructor ";
        }
        
};

int main()
{
    int x = 0;
    if(x==0)
    {
        Fun obj;
    }
    cout << "main ";
    return 0; 
}