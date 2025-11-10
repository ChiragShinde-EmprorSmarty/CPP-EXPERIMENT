#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;
public:
    void inputPerson() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
protected:
    int rollNo;
public:
    void inputStudent() {
        inputPerson();
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
    }
};


class Sports {
protected:
    int sportsScore;
public:
    void inputSports() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};


class Academics {
protected:
    int marks;
public:
    void inputAcademics() {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Result : public Student, public Sports, public Academics {
public:
    void inputResult() {
        inputStudent();
        inputSports();
        inputAcademics();
    }

    void displayResult() {
        cout << "\n----- Student Result -----" << endl;
        displayStudent();
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << marks + sportsScore << endl;
    }
};


int main() {
    Result r;
    r.inputResult();
    r.displayResult();
    return 0;
}