#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid]) {
            s = mid + 1;
        } else if (target < nums[mid])
            e = mid - 1;
    }
    // If target is not found, return the index where it would be inserted
    return s;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int index = searchInsert(nums, target);
    cout << "Index of target " << target << " is: " << index << endl;
    
    return 0;
}
