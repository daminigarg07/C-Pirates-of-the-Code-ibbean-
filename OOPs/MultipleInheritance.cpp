#include<iostream>
using namespace std;

class Person {
    public:
        void showPerson() {
            cout << "I am a Person" << endl;
        }
};

class Employee {
    public:
        void showEmployee() {
            cout << "I am an Employee" << endl;
        }
};

class Manager : public Person, public Employee {
    public:
        void showManager() {
            cout << "I am a Manager" << endl;
        }
};

int main() {
    Manager m;
    m.showPerson();
    m.showEmployee();
    m.showManager();
    return 0;
}
