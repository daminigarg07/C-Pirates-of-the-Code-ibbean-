#include<iostream>
using namespace std;

class Box {
    private:
        int length;

    public:
        Box() : length(0) {}

        friend void printLength(Box);  // Friend function declaration
};

void printLength(Box b) {
    cout << "Length: " << b.length << endl;  // Can access private members
}

int main() {
    Box b;
    printLength(b);
    return 0;
}
