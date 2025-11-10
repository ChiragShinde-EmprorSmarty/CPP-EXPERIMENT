#include <iostream>
using namespace std;

class Book {
public:
    string book_name;
    float price;
    int pages;

public:
    void accept() {
        cout << "Enter Book Name: ";
        cin >> book_name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Pages: ";
        cin >> pages;
    }


};

int main() {
    Book b1, b2;

    cout << "Enter details of Book 1:\n";
    b1.accept();

    cout << "\nEnter details of Book 2:\n";
    b2.accept();

    cout << "\n--- Result ---\n";
    if (b1.price > b2.price)
        cout << "Book with greater price: " << b1.book_name << endl;
    else if (b2.price > b1.price)
        cout << "Book with greater price: " << b2.book_name << endl;
    else
        cout << "Both books have the same price." << endl;

    return 0;
}