#include <iostream>
using namespace std;

class SwapNumbers {
public:
    int a, b;

    void getValues() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swapValues(SwapNumbers obj) {
        int temp = obj.a;
        obj.a = obj.b;
        obj.b = temp;
        cout << "After Swap: a = " << obj.a << ", b = " << obj.b << endl;
    }
};

int main() {
    SwapNumbers s;
    s.getValues();
    s.swapValues(s);
    return 0;
}