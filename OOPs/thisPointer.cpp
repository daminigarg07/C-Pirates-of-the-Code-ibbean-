#include<iostream>
using namespace std;

class Demo {
    private:
        int a;

    public:
        Demo(int a) {
            this->a = a;  // Using this pointer to refer to the current object's member
        }

        void display() {
            cout << "a = " << a << endl;
        }
};

int main() {
    Demo obj(10);
    obj.display();  // Output: a = 10
    return 0;
}
