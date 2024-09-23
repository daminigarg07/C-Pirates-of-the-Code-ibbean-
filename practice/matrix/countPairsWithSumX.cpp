#include <iostream>
#include <vector>

using namespace std;

int countPairsWithSumX(vector<vector<int>>& mat1, vector<vector<int>>& mat2, int x) {
    int n = mat1.size();
    vector<int> arr1, arr2;

    // Flatten mat1
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr1.push_back(mat1[i][j]);
        }
    }

    // Flatten mat2
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr2.push_back(mat2[i][j]);
        }
    }

    // Use two-pointer technique to find pairs
    int count = 0;
    int i = 0;            // Pointer for arr1
    int j = n * n - 1;    // Pointer for arr2

    while (i < n * n && j >= 0) {
        int sum = arr1[i] + arr2[j];
        if (sum == x) {
            count++;
            i++;
            j--;
        } else if (sum < x) {
            i++;
        } else {
            j--;
        }
    }

    return count;
}

int main() {
    vector<vector<int>> mat1 = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };
    vector<vector<int>> mat2 = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int x = 20;

    int result = countPairsWithSumX(mat1, mat2, x);
    cout << "Number of pairs with sum " << x << " is: " << result << endl;

    return 0;
}
