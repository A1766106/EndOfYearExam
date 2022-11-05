#include <iostream>

using namespace std;

struct Book{
    string title;
    string author;
    int year;
    int book_id;
};

int main(){
    Book* b1 = new Book[2];
    Book* b2 = new Book[2];
    b1[0].title = "Book11";
    b1[1].title = "Book12";

    b2[0].title = "Book21";
    b2[1].title = "Book22";

    b2=b1;

    cout << b2[1].title << endl;
    return 0;
}