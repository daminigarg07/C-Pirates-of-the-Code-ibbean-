#include<iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
};

class Mammal : public Animal {
    public:
        void walk() {
            cout << "Walking..." << endl;
        }
};

class Human : public Mammal {
    public:
        void speak() {
            cout << "Speaking..." << endl;
        }
};

int main() {
    Human h;
    h.eat();    // Inherited from Animal
    h.walk();   // Inherited from Mammal
    h.speak();  // Own method
    return 0;
}
