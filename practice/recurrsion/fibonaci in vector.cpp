#include <iostream>
#include <vector>
using namespace std;

vector<int> generateFibonacciNumbers(int n) {
    vector<int> v;
    if (n <= 0) {
        return v; 
    }
    if (n == 1) {
        v.push_back(0); 
        return v;
    }
    v.push_back(0); 
    v.push_back(1); 
    for (int i = 2; i < n; i++) {
        int next = v[i - 1] + v[i - 2]; // Calculate the next Fibonacci number
       v.push_back(next); 
    }
    return v;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> result = generateFibonacciNumbers(n);

    cout << "Fibonacci numbers to " << n << ": ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
