#include <iostream>
using namespace std;

class Account {
public:
    int accNo;
    float balance;

    void getData() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void addInterest() {
        if (balance >= 5000)
            balance += balance * 0.10;  // Add 10% interest
    }

    void display() {
        cout << "Account No: " << accNo << "  Balance: " << balance << endl;
    }
};

int main() {
    Account a[10];

    cout << "Enter data for 10 accounts:\n";
    for (int i = 0; i < 10; i++) {
        a[i].getData();
        a[i].addInterest();
    }

    cout << "\nAccounts after adding 10% interest (if balance >= 5000):\n";
    for (int i = 0; i < 10; i++) {
        a[i].display();
    }

    return 0;
}