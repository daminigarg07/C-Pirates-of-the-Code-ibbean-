#include<iostream>
using namespace std;

class Animal {
    public:
        virtual void sound() {
            cout << "Animal makes a sound" << endl;
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout << "Dog barks" << endl;
        }
};

class Cat : public Animal {
    public:
        void sound() override {
            cout << "Cat meows" << endl;
        }
};

int main() {
    Animal* animal;
    Dog dog;
    Cat cat;
    
    animal = &dog;
    animal->sound();  // Dog's sound will be called due to virtual function
    
    animal = &cat;
    animal->sound();  // Cat's sound will be called
    
    return 0;
}
