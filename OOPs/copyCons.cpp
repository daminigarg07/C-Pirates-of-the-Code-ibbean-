#include<iostream>
using namespace std;

class Demo {
    private:
        int x;

    public:
        Demo(int x) : x(x) {}

        // Copy constructor
        Demo(const Demo &obj) {
            x = obj.x;
        }

        void display() {
            cout << "x = " << x << endl;
        }
};

int main() {
    Demo obj1(10);  // Normal constructor
    Demo obj2 = obj1;  // Copy constructor

    obj2.display();  // Output: x = 10
    return 0;
}
