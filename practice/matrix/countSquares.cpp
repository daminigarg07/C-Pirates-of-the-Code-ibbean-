#include <iostream>
using namespace std;

int countSquares(int m, int n) {
    int totalSquares = 0;
    int maxSquareSize = min(m, n);

    // Iterate over each possible square size
    for (int k = 1; k <= maxSquareSize; ++k) {
        // Calculate the number of k x k squares
        totalSquares += (m - k + 1) * (n - k + 1);
    }

    return totalSquares;
}

int main() {
    int m = 4; // Number of rows
    int n = 3; // Number of columns

    cout << "Total number of squares: " << countSquares(m, n) << endl;
    return 0;
}
