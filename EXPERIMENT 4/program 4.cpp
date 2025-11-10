#include <iostream>
using namespace std;

class Result2;

class Result1 {
private:
    int marks1;
public:
    void getMarks() {
        cout << "Enter marks for Result1: ";
        cin >> marks1;
    }
    friend void average(Result1, Result2);
};

class Result2 {
private:
    int marks2;
public:
    void getMarks() {
        cout << "Enter marks for Result2: ";
        cin >> marks2;
    }
    friend void average(Result1, Result2);
};

void average(Result1 r1, Result2 r2) {
    float avg = (r1.marks1 + r2.marks2) / 2.0;
    cout << "Average Marks = " << avg << endl;
}

int main() {
    Result1 r1;
    Result2 r2;
    r1.getMarks();
    r2.getMarks();
    average(r1, r2);
    return 0;
}