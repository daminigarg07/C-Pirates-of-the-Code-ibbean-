#include<iostream>
using namespace std;

class Employee {
    private:
        string name;
        int age;

    public:
        // Setter with validation
        void setAge(int a) {
            if(a > 18)
                age = a;
            else
                cout << "Age must be greater than 18." << endl;
        }

        int getAge() {
            return age;
        }

        void setName(string n) {
            name = n;
        }

        string getName() {
            return name;
        }
};

int main() {
    Employee emp;
    emp.setName("John Doe");
    emp.setAge(25);
    cout << "Employee: " << emp.getName() << ", Age: " << emp.getAge() << endl;
    return 0;
}
