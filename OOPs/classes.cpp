#include<bits/stdc++.h>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        int year;
    
    public:
        // Constructor using initialization list
        Car(string b, string m, int y) : brand(b), model(m), year(y) {}

        void display() {
            cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
        }
};

int main() {
    Car car1("Tesla", "Model S", 2022);
    car1.display();
    return 0;
}
