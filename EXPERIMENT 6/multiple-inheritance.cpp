#include <iostream>
using namespace std;

// Base Class 1
class Academic {
protected:
    int marks;
public:
    void inputMarks() {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Sports {
protected:
    int sportsScore;
public:
    void inputSportsScore() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};


class Result : public Academic, public Sports {
public:
    void displayResult() {
        int total = marks + sportsScore;
        cout << "\n--- Result Details ---" << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    r.inputMarks();
    r.inputSportsScore();
    r.displayResult();
    return 0;
}