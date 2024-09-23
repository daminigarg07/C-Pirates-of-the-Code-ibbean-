#include <iostream>
using namespace std;

int maxChocolatePieces(int k) {
    int m = k / 2;
    int n = k - m;
    return m * n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << maxChocolatePieces(k) << endl;
    }
    return 0;
}
