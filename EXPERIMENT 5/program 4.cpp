#include <iostream>
using namespace std;

class Demo {
private:
    int a, b;
public:
   
    Demo() {
        a = 0;
        b = 0;
    }

    
    Demo(int x, int y) {
        a = x;
        b = y;
    }

  
    Demo(int x) {
        a = x;
        b = 0;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Demo obj1;
    Demo obj2(10, 20);
    Demo obj3(50);

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}