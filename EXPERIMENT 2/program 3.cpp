#include <iostream>
using namespace std;

class Staff {
public:
    string name;
    string post;

    void getData() {
        cout << "Enter Staff Name: ";
        cin >> name;
        cout << "Enter Post: ";
        cin >> post;
    }

    void displayIfHOD() {
        if (post == "HOD" || post == "hod" || post == "Hod")
            cout << "Name of HOD: " << name << endl;
    }
};

int main() {
    Staff s[5];

    cout << "Enter data for 5 staff members:\n";
    for (int i = 0; i < 5; i++) {
        s[i].getData();
    }

    cout << "\nStaff members who are HOD:\n";
    for (int i = 0; i < 5; i++) {
        s[i].displayIfHOD();
    }

    return 0;
}