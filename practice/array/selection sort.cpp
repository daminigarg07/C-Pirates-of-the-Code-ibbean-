#include<bits/stdc++.h>
using namespace std;
void selection(vector<int> &v) {
    int i, j;
    for (i = 0; i < v.size(); i++) {
        for (j = i + 1; j < v.size(); j++) {
            if (v[j] < v[i]) {
                swap(v[j], v[i]);
            }
        }
    }
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    selection(v);
    cout << "Sorted array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}