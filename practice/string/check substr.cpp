#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(string A, string B) {
    int m = A.size(), n = B.size();
    int j = 0; // For index of A

    // Traverse B and compare with A
    for (int i = 0; i < n && j < m; i++) {
        if (A[j] == B[i]) {
            j++;
        }
    }

    // If all characters of A were found in B
    return (j == m);
}

int main() {
    string A;
    string B;
    cin>>A>>B;
    
    if (isSubsequence(A, B)) {
        cout << "1" << endl; // A is a subsequence of B
    } else {
        cout << "0" << endl; // A is not a subsequence of B
    }
    
    return 0;
}
