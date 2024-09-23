#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
    int n = mat[0].size();
        unordered_set<int> row;
        unordered_set<int> col;
        for(int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto i:row)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j]=0;
            }
        }
        for(auto j:col)
        {
            for(int i=0;i<m;i++)
            {
                mat[i][j]=0;
            }
        }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
