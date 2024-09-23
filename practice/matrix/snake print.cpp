#include <vector>

using namespace std;

vector<int> snakePattern(vector<vector<int>> m) {   
    vector<int> v;
    int n = m.size();
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // For even-indexed rows, traverse from left to right
            for (int j = 0; j < n; ++j) {
                v.push_back(m[i][j]);
            }
        } else {
            // For odd-indexed rows, traverse from right to left
            for (int j = n - 1; j >= 0; --j) {
                v.push_back(m[i][j]);
            }
        }
    }
    
    return v;
}
