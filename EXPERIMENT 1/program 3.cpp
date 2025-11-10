#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

public:
    void accept() {
        cout << "Enter time in HH MM SS format: ";
        cin >> hours >> minutes >> seconds;
    }

    int convertToSeconds() {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
        return totalSeconds;
    }

    void display() {
        cout << "Time entered: " << hours << " hrs : "
             << minutes << " mins : " << seconds << " secs" << endl;
        cout << "Total time in seconds = " << convertToSeconds() << " seconds" << endl;
    }
};

int main() {
    Time t;
    t.accept();
    t.display();
    return 0;
}