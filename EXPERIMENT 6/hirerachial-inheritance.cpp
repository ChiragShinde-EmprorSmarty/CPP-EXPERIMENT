
#include <iostream>
using namespace std;


class Employee {
protected:
    int empID;
    string name;
public:
    void inputEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    void inputManagerDetails() {
        inputEmployeeDetails();
        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManagerDetails() {
        cout << "\n--- Manager Details ---" << endl;
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
    }
};


class Developer : public Employee {
private:
    string programmingLanguage;
public:
    void inputDeveloperDetails() {
        inputEmployeeDetails();
        cout << "Enter Programming Language: ";
        cin >> programmingLanguage;
    }

    void displayDeveloperDetails() {
        cout << "\n--- Developer Details ---" << endl;
        displayEmployeeDetails();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};


int main() {
    Manager m;
    Developer d;

    cout << "\nEnter Manager Details:\n";
    m.inputManagerDetails();

    cout << "\nEnter Developer Details:\n";
    d.inputDeveloperDetails();

    m.displayManagerDetails();
    d.displayDeveloperDetails();

    return 0;
}