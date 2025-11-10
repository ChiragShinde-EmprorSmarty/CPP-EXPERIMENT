#include <iostream>
using namespace std;

class City {
public:
    string name;
    long population;

public:
    void getData() {
        cout << "Enter city name: ";
        cin >> name;
        cout << "Enter population: ";
        cin >> population;
    }


};

int main() {
    City c[5];
    int i;
    int max=0;

    cout << "Enter data for 5 cities:\n";
    for (int i = 0; i < 5; i++) {
        c[i].getData();
    }
    for (int i=0;i<5;i++) {
        if (c[i].population > c[max].population) {
            max = i;
        }
    }




    cout << "\nCity with highest population: " << c[max].name << endl;
    return 0;
}