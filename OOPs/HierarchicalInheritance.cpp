#include<iostream>
using namespace std;

class Vehicle {
    public:
        void start() {
            cout << "Vehicle started" << endl;
        }
};

class Car : public Vehicle {
    public:
        void drive() {
            cout << "Car is driving" << endl;
        }
};

class Bike : public Vehicle {
    public:
        void ride() {
            cout << "Bike is riding" << endl;
        }
};

int main() {
    Car car1;
    Bike bike1;
    
    car1.start();  // Inherited from Vehicle
    car1.drive();  
    
    bike1.start();  // Inherited from Vehicle
    bike1.ride();
    
    return 0;
}
