#include <vector>
#include <climits> // For INT_MAX
#include <algorithm> // For max and min

using namespace std;

vector<int> getFloorAndCeil(int x, vector<int> &arr) {
    vector<int> v(2, -1); // Initialize floor and ceiling as -1
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            // If the exact value x is found, set both floor and ceiling to x
            v[0] = x;
            v[1] = x;
            return v; // No need to continue
        } else if (arr[i] < x) {
            v[0] = max(v[0], arr[i]); // Update floor
        } else if (arr[i] > x) {
            if (v[1] == -1) {
                v[1] = arr[i]; // Initialize ceiling
            } else {
                v[1] = min(v[1], arr[i]); // Update ceiling
            }
        }
    }

    return v; // Return vector containing [floor, ceiling]
}
