#include<iostream>
using namespace std;

class Base {
    public:
        Base() {
            cout << "Base class constructor" << endl;
        }
        
        virtual ~Base() {
            cout << "Base class destructor" << endl;
        }
};

class Derived : public Base {
    public:
        Derived() {
            cout << "Derived class constructor" << endl;
        }
        
        ~Derived() {
            cout << "Derived class destructor" << endl;
        }
};

int main() {
    Base* obj = new Derived();
    delete obj;  // Base class destructor will be called due to virtual destructor
    return 0;
}
