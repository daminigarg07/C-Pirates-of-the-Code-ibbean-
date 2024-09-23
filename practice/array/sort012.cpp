#include <bits/stdc++.h>
using namespace std;

// Function to sort an array of 0s, 1s, and 2s
void sort012(int a[], int n) {
    int l = 0, m = 0, h = n - 1;
    while (m <= h) {
        if (a[m] == 0) {
            swap(a[l], a[m]);
            m++;
            l++;
        } else if (a[m] == 1) {
            m++;
        } else {
            swap(a[m], a[h]);
            h--;
        }
    }
}

// Function to print an array
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Main function to test the sort012 function
int main() {
    int a[] = {0, 1, 2, 1, 0, 2, 1, 2, 0, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    printArray(a, n);

    sort012(a, n);

    cout << "Sorted array: ";
    printArray(a, n);

    return 0;
}
