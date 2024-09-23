#include<iostream>
using namespace std;

class Base {
    public:
        void showBase() {
            cout << "Base class function" << endl;
        }
};

class Derived : public Base {
    public:
        void showDerived() {
            cout << "Derived class function" << endl;
        }
};

int main() {
    Derived d;
    d.showBase();   // Inherited from Base
    d.showDerived();
    return 0;
}
