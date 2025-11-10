#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
public:
    void inputVehicleDetails() {
        cout << "Enter Vehicle Brand: ";
        cin >> brand;
        cout << "Enter Vehicle Model: ";
        cin >> model;
    }

    void displayVehicleDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};


class Car : public Vehicle {
protected:
    string type;
public:
    void inputCarDetails() {
        inputVehicleDetails();
        cout << "Enter Car Type (SUV/Sedan/etc.): ";
        cin >> type;
    }

    void displayCarDetails() {
        displayVehicleDetails();
        cout << "Car Type: " << type << endl;
    }
};


class ElectricCar : public Car {

    int batteryCapacity;
public:
    void inputElectricCarDetails() {
        inputCarDetails();
        cout << "Enter Battery Capacity (in kWh): ";
        cin >> batteryCapacity;
    }

    void displayElectricCarDetails() {
        cout << "\n--- Electric Car Details ---" << endl;
        displayCarDetails();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};


int main() {
    ElectricCar e;
    e.inputElectricCarDetails();
    e.displayElectricCarDetails();
    return 0;
}