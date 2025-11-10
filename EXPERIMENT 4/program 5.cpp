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
    friend void greatest(A, B);
};

class B {
private:
    int y;
public:
    void getData() {
        cout << "Enter value of y: ";
        cin >> y;
    }
    friend void greatest(A, B);
};

void greatest(A a, B b) {
    if (a.x > b.y)
        cout << "Greatest number = " << a.x;
    else
        cout << "Greatest number = " << b.y;
}

int main() {
    A obj1;
    B obj2;
    obj1.getData();
    obj2.getData();
    greatest(obj1, obj2);
    return 0;
}