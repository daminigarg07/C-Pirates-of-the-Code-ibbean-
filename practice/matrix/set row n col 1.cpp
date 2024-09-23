#include <vector>
using namespace std;

void booleanMatrix(vector<vector<int>>& m) {
    int n = m.size();
    if (n == 0) return; // Handle the case for an empty matrix
    int mCols = m[0].size();
    
    vector<int> row(n, 0);
    vector<int> col(mCols, 0);
    
    // First pass: record the rows and columns that should be modified
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < mCols; ++j) {
            if (m[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    // Second pass: modify the matrix based on the recorded information
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < mCols; ++j) {
            if (row[i] == 1 || col[j] == 1) {
                m[i][j] = 1;
            }
        }
    }
}
