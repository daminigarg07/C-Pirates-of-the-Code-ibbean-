#include <iostream>
using namespace std;

int maxCakeSlices(int k) {
    return (k * (k + 1)) / 2 + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << maxCakeSlices(k) << endl;
    }
    return 0;
}
