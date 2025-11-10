#include <iostream>
using namespace std;

class College {
private:
    int roll_no;
    string name;
    string course;
public:
    College(int r, string n, string c = "Computer Engineering") {
        roll_no = r;
        name = n;
        course = c;
    }

    void display() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl << endl;
    }
};

int main() {
    College s1(101, "Amit");
    College s2(102, "Riya", "Information Technology");

    s1.display();
    s2.display();

    return 0;
}