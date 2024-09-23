#include<iostream>
using namespace std;

// Abstract class with pure virtual function
class Shape {
    public:
        virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a Circle" << endl;
        }
};

class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a Rectangle" << endl;
        }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    
    shape1->draw();
    shape2->draw();
    
    delete shape1;
    delete shape2;
    
    return 0;
}
