#include <vector>
using namespace std;

int rowWithMax1s(vector<vector<int>>& arr) {
    int r = arr.size();
    if (r == 0) return -1;
    int c = arr[0].size();
    if (c == 0) return -1;
    
    int maxRowIndex = -1;
    int j = c - 1; // Start from the top-right corner
    
    for (int i = 0; i < r; ++i) {
        while (j >= 0 && arr[i][j] == 1) {
            maxRowIndex = i; // Update the row index
            --j; // Move left
        }
    }//terminates if all rows all checked or if j<0 i.e all cols of a row are checked
    
    return maxRowIndex;
}
