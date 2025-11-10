#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;
public:
    void inputPersonDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class
class Student : public Person {
private:
    int rollNumber;
public:
    void inputStudentDetails() {
        inputPersonDetails(); // Taking base class details
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayStudentDetails() {
        displayPersonDetails(); // Display base class details
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Main Function
int main() {
    Student s;
    s.inputStudentDetails();
    cout << "\n--- Student Details ---" << endl;
    s.displayStudentDetails();
    return 0;
}