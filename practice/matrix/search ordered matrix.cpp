#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int X) {
    int N = mat.size();
    if (N == 0) return false;
    int M = mat[0].size();
    if (M == 0) return false;
    
    // Start from the top-right corner
    int i = 0;
    int j = M - 1;
    
    while (i < N && j >= 0) {
        if (mat[i][j] == X) {
            return true;
        } else if (mat[i][j] > X) {
            --j; // Move left
        } else {
            ++i; // Move down
        }
    }
    
    // If we move out of matrix boundaries, X is not present
    return false;
}

int main() {
    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int X = 5;
    
    if (searchMatrix(mat, X)) {
        cout << "Element " << X << " is present in the matrix." << endl;
    } else {
        cout << "Element " << X << " is not present in the matrix." << endl;
    }

    return 0;
}
