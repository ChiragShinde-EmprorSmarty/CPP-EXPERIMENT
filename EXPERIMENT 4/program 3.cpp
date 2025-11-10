#include <iostream>
using namespace std;

class B;

class A {
private:
    int x;
public:
    void getData() {
        cout << "Enter value of x: ";
        cin >> x;
    }
    friend void swapValues(A &, B &);
};

class B {
private:
    int y;
public:
    void getData() {
        cout << "Enter value of y: ";
        cin >> y;
    }
    friend void swapValues(A &, B &);
};

void swapValues(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;

    cout << "After Swap: x = " << a.x << ", y = " << b.y << endl;
}

int main() {
    A obj1;
    B obj2;
    obj1.getData();
    obj2.getData();
    swapValues(obj1, obj2);
    return 0;
}