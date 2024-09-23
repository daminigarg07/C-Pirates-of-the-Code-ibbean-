#include<bits/stdc++.h>

using namespace std;


bool findNumberInMatrix(vector<vector<int>>& m, int target) {
	int row=m.size();
	int col=m[0].size();
	if(row==0 || col==0)
	return false;
    
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (m[i][j] == target) {
                return true; 
            }
        }
    }

    return false; 
}

int main() {
    int row, col, target;

    // Take user input for the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

     vector<vector<int>>m(row,vector<int>(col));
    // Take user input for the elements of the matrix
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> m[i][j];
        }
    }

    // Take user input for the target number
    cout << "Enter the number to find: ";
    cin >> target;

    // Call the function to find the number and display the result
    if (findNumberInMatrix(m, target)) {
        cout << "Number " << target << " found in the matrix." << endl;
    } else {
        cout << "Number " << target << " not found in the matrix." << endl;
    }

    
   

    return 0;
}
