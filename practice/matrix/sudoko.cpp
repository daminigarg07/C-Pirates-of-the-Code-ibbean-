#include <vector>
#include <unordered_set>

using namespace std;

bool isValidSudoku(vector<vector<int>>& mat) {
    // Define sets to track seen numbers in rows, columns, and subgrids
    vector<unordered_set<int>> rows(9);
    vector<unordered_set<int>> cols(9);
    vector<unordered_set<int>> subgrids(9);
    
    // Iterate through each cell in the matrix
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int num = mat[i][j];
            if (num != 0) {
                // Calculate the index of the subgrid
                int subgridIndex = (i / 3) * 3 + j / 3;
                
                // Check for duplicates in the row
                if (rows[i].find(num) != rows[i].end()) {
                    return false;
                }
                // Check for duplicates in the column
                if (cols[j].find(num) != cols[j].end()) {
                    return false;
                }
                // Check for duplicates in the subgrid
                if (subgrids[subgridIndex].find(num) != subgrids[subgridIndex].end()) {
                    return false;
                }
                
                // Add the number to the row, column, and subgrid sets
                rows[i].insert(num);
                cols[j].insert(num);
                subgrids[subgridIndex].insert(num);
            }
        }
    }
    
    // If no duplicates are found, the configuration is valid
    return true;
}
