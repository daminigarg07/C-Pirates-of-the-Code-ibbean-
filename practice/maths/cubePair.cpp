#include <bits/stdc++.h>
using namespace std;
//Number of pairs (a, b) satisfying a^3 + b^3 = N:
int cubePair(int N)
{
	int count=0;
	
	for (int a = 1; pow(a, 3) <= N; a++) {
        for (int b = 0; pow(a, 3) + pow(b, 3) <= N; b++) {
            if (pow(a, 3) + pow(b, 3) == N) {
                count++;
            }
        }
    }

    return count;
}
int main()
{
	int n;
	cin>>n;
	cout<<endl<<cubePair(n);
	return 0;
}