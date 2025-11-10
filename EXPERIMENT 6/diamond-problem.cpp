#include <iostream>
using namespace std;

// Base Class
class CollegeStudent {
protected:
    int student_id;
    int college_code;
public:
    void inputCollegeStudent() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cout << "Enter College Code: ";
        cin >> college_code;
    }

    void displayCollegeStudent() {
        cout << "Student ID: " << student_id << endl;
        cout << "College Code: " << college_code << endl;
    }
};


class Test : virtual public CollegeStudent {
protected:
    float percentage;
public:
    void inputTest() {
        cout << "Enter Percentage in Test: ";
        cin >> percentage;
    }

    void displayTest() {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Sports : virtual public CollegeStudent {
protected:
    char grade;
public:
    void inputSports() {
        cout << "Enter Sports Grade: ";
        cin >> grade;
    }

    void displaySports() {
        cout << "Sports Grade: " << grade << endl;
    }
};


class Result : public Test, public Sports {
public:
    void inputResult() {
        inputCollegeStudent();
        inputTest();
        inputSports();
    }

    void displayResult() {
        cout << "\n----- RESULT DETAILS -----" << endl;
        displayCollegeStudent();
        displayTest();
        displaySports();
    }
};

int main() {
    Result r;
    r.inputResult();
    r.displayResult();
    return 0;
}