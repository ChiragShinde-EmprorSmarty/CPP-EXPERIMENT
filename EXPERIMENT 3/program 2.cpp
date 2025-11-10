#include <iostream>
#include <cstring>
using namespace std;
class student {
    public:
    int rollno;
    int percentage;

    void accept() {
        cout << "Enter Roll No: ";
        cin >> this->rollno;
        cout << "Enter Percentage: ";
        cin >> this->percentage;
    }
    void display() {
        this->accept();
        cout<<"the roll no of the student is"<<this->rollno;
        cout<<"the percentage of the student is"<<this->percentage;
    }

};
int main() {
    student s;
    s.display();
}