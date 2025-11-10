#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b;

public:
    void getValues() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void swapValues(SwapNumbers &s);
};

void swapValues(SwapNumbers &s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
    cout << "After Swap: a = " << s.a << ", b = " << s.b << endl;
}

int main() {
    SwapNumbers s;
    s.getValues();
    swapValues(s);
    return 0;
}