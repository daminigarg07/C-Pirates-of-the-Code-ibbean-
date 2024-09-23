#include<iostream>
using namespace std;

class Complex {
    private:
        int real, imag;

    public:
        Complex() : real(0), imag(0) {}

        Complex(int r, int i) : real(r), imag(i) {}

        // Operator overloading for addition
        Complex operator + (const Complex &obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        // Operator overloading for comparison
        bool operator == (const Complex &obj) {
            return (real == obj.real && imag == obj.imag);
        }

        void display() {
            cout << real << " + i" << imag << endl;
        }
};

int main() {
    Complex c1(3, 4), c2(1, 2), c3;
    
    c3 = c1 + c2;  // Adding two complex numbers
    c3.display();  // Output: 4 + i6

    if(c1 == c2)
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;

    return 0;
}
