#include <iostream>
#include <vector>
using namespace std;

vector<int> createArray(int n) {
    if (n == 0) {
        return vector<int>(); // Return an empty vector when n is 0
    } else {
        vector<int> arr = createArray(n - 1); // Recursively create array of size n-1
        arr.push_back(n); // Append n to the array
        return arr;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> result = createArray(n);

    cout << "Array containing integers from 1 to " << n << " (in increasing order): ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
