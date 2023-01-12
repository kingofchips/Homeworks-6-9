#include <iostream>
using namespace std;

class Driver {
private:
    string name;
    string licenseNumber;
public:
    Driver(string name, string licenseNumber) {
        this->name = name;
        this->licenseNumber = licenseNumber;
    }
    void Display() {
        cout << "name: " << name << endl << "licenseNumber: " << licenseNumber;
    }
};

class Car {
private:
    string name;
    string licensePlate;
    string color;
public:
    Car(string name, string licensePlate, string color) {
        this->name = name;
        this->licensePlate = licensePlate;
        this->color = color;
    }
    void DisplayAll() {
        cout << "name: " << name << endl << "licensePlate: " << licensePlate << "color: " << color;
    }
};

class Couple {
    // Vector<Car>; - I tried to copy the example 7.5 from the material, but it says that the vectors are not templates.
    // Vector<Driver>;
};

int main()
{

}