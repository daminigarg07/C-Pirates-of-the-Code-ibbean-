#include <iostream>
#include <vector>
#include <algorithm>  // for binary_search, lower_bound, upper_bound

using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};

    // using binary_search to check if 15 exists
    if (binary_search(arr.begin(), arr.end(), 15))
        cout << "15 exists in vector";
    else
        cout << "15 does not exist";
    
    cout << endl;


    // using lower_bound and upper_bound
    auto lb = lower_bound(arr.begin(), arr.end(), 20);
    auto ub = upper_bound(arr.begin(), arr.end(), 20);
    
    cout << "Lower bound of 20: " << (lb != arr.end() ? to_string(*lb) : "Not Found") << endl;
    cout << "Upper bound of 20: " << (ub != arr.end() ? to_string(*ub) : "Not Found") << endl;
    
    return 0;
}
