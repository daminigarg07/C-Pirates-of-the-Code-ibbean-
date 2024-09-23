#include <iostream>
#include <unordered_set>

using namespace std;

int findUniqueMarblesLeft(int N, int A, int B) {
    unordered_set<int> uniqueMarbles;
    uniqueMarbles.insert(N);

    unordered_set<int> prevMarbles; // Keep track of previous state
    prevMarbles.insert(N);

    while (true) {
        unordered_set<int> temp(uniqueMarbles.begin(), uniqueMarbles.end());

        for (int marble : temp) {
            if (marble - A > 0) {
                uniqueMarbles.insert(marble - A);
            }
            if (marble - B > 0) {
                uniqueMarbles.insert(marble - B);
            }
        }

        // Check if current state is same as previous state
        if (prevMarbles == uniqueMarbles) {
            break;
        }

        prevMarbles = uniqueMarbles; // Update previous state
    }

    return uniqueMarbles.size();
}

int main() {
    int N = 4;
    int A = 1;
    int B = 2;

    int uniqueMarblesLeft = findUniqueMarblesLeft(N, A, B);
    cout << uniqueMarblesLeft << endl;

    return 0;
}
