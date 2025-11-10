#include <iostream>
using namespace std;

class Sum {
private:
    int n, total;
public:
    Sum(int num) {
        n = num;
        total = 0;
        for(int i = 1; i <= n; i++)
            total += i;
    }

    void display() {
        cout << "Sum of numbers from 1 to " << n << " = " << total << endl;
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Sum obj(n);
    obj.display();
    return 0;
}