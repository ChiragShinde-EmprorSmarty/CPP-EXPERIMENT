#include <iostream>
using namespace std;

class student {
    int roll_no;
    string name;
    string class_name;   
public:
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Class: ";
        cin >> class_name;
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << class_name << endl;
    }
};

int main() {
    student s;
    s.accept();
    s.display();
    return 0;
}