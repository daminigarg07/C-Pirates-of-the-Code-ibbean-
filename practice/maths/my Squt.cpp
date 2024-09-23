#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
	if (x == 0 || x == 1)
        return x;

    int s = 1;
    int e = x;
    int ans = 0;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (mid <= x / mid) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
	int n;
	cout<<"enter no:  ";
	cin>>n;
	cout<<endl<<mySqrt(n);
	return 0;
}