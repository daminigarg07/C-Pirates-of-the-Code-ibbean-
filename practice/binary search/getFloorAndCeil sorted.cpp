#include <vector>
#include <algorithm> // For lower_bound and upper_bound

using namespace std;

vector<int> getFloorAndCeil(int x, vector<int> &arr) {
    vector<int> v(2, -1); // Initialize floor and ceiling as -1

    // Find the position of the first element not less than x
    auto ceil_it = lower_bound(arr.begin(), arr.end(), x);
    if (ceil_it != arr.end()) {
        v[1] = *ceil_it; // Ceiling value
    }

    // Find the position of the last element not greater than x
    auto floor_it = upper_bound(arr.begin(), arr.end(), x);
    if (floor_it != arr.begin()) {
        v[0] = *(--floor_it); // Floor value
    }

    return v; // Return vector containing [floor, ceiling]
}
