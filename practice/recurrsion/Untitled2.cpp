#include<bits/stdc++.h>
using namespace std;

void set0<vector<vector<int>>& v>
{
	int r=v.size();
	int c=v[0].size();
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if (v[i][j]==0)
			{
				
			}
		}
	}
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
