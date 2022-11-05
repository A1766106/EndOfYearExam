#include <iostream>

using namespace std;

struct Book{
    string title;
    string author;
    int year;
    int book_id;
};

int main(){
    Book b1, b2;
    b1.title = "Book1";
    b2=b1;
    cout << b2.title << endl;
    return 0;
}