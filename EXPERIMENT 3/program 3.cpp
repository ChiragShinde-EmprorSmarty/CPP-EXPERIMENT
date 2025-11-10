#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "This is the Outer class" << endl;
    }

    // Nested class
    class Inner {
    public:
        void show() {
            cout << "This is the Inner (Nested) class" << endl;
        }
    };
};

int main() {
    // Creating object of Outer class
    Outer obj;
    obj.display();

    // Creating object of Inner class
    Outer::Inner obj2;
    obj2.show();

    return 0;
}