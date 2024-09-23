#include<bits/stdc++.h>
using namespace std;

bool isExponent(int x, int m) {
    auto r = log(m) / log(x);
    return fabs(fmod(r, 1)) < 1e-9; // Check if the remainder is very close to zero
}

int main() {
    int x, m;
    cin >> x >> m;
    cout << endl << isExponent(x, m);
    return 0;
}
