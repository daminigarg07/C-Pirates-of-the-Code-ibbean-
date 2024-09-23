#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> v;
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            v.push_back(nums1[i]);
            i++;
        } else {
            v.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m) {
        v.push_back(nums1[i]);
        i++;
    }
    while (j < n) {
        v.push_back(nums2[j]);
        j++;
    }
    nums1.clear();
    for (auto x : v) {
        nums1.push_back(x);
    }
}

int main() {
    int m, n;
    cout << "Enter the size of nums1 array: ";
    cin >> m;
    vector<int> nums1(m);
    cout << "Enter elements of nums1 array: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter the size of nums2 array: ";
    cin >> n;
    vector<int> nums2(n);
    cout << "Enter elements of nums2 array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (auto num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
