#include <iostream>
#include <string>
using namespace std;

class Driver {
public:
    string name;
    int personAge;
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
    int getpersonAge() {
        return this->personAge;
    }
    void setAge(int personAge) {
        this->personAge = personAge;
    }
};

class Car {
public:
    int carAge;
    Driver driver;
    Car(int carAge, string driverName) {
        this->carAge = carAge;
        this->driver.setName(driverName);
    }
    int getAge() {
        return this->carAge;
    }
    Driver getDriver() {
        return this->driver;
    }
};

template<class T, class U> // I followed the example 8.12 from the lab material.
class AverageAge {
    list<T>DriverList; // We create 2 separate lists. One for the drivers, one for the cars.
    list<U>CarList;

    void addPersonAge(T personAge) {    // We add the age of each person in the Drivers list.
        DriverList.push_back(personAge);
    }
    int averagePersonAge() {
        int sumPersonAge = 0;
        int n = 0;
        for (T it : DriverList)       // Using a for, we compute the total sum of all ages from the list.
        {
            sumPersonAge += it.getpersonAge(); 
            n = n + 1;
        }
        return sumAge / n;  // After the list is finished, we compute the average age of the drivers.
    }

    void addCarAge(T carAge) {    // We add the age of each car in the Drivers list.
        CarList.push_back(carAge);
    }
    int averageCarAge() {
        int sumCarAge = 0;
        int m = 0;
        for (T it : CarList)       // Using a for, we compute the total sum of all ages from the list.
        {
            sumCarAge += it.getcarAge();
            m = m + 1;
        }
        return sumAge / m;  // After the list is finished, we compute the average age of the cars.
    }
};

int main()
{
    
}
