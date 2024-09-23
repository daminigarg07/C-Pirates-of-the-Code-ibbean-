#include<iostream>
using namespace std;

class Demo {
    public:
        Demo() {
            cout << "Constructor called" << endl;
        }

        ~Demo() {
            cout << "Destructor called" << endl;
        }
};

int main() {
    Demo obj;  // Constructor will be called here
    // Destructor will be called when obj goes out of scope
    return 0;
}
