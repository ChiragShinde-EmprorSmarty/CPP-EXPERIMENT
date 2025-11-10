#include <iostream>
#include <cstring>
using namespace std;
class Book {
    public:
    string book_name;
    string book_author;
    int price;

    void accept() {
        cout<<"Enter Book Name: ";
        cin>>book_name;
        cout<<"Enter Book Author: ";
        cin>>book_author;
        cout<<"Enter Price: ";
        cin>>price;

    }
    void display() {
        cout<<"Book Name: "<<book_name<<endl;
        cout<<"Book Author: "<<book_author<<endl;
        cout<<"Price: "<<price<<endl;
    }


};

int main() {
    Book b;
    Book *p;
    p=&b;
    p->accept();
    p->display();
}