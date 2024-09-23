#include<bits/stdc++.h>
using namespace std;
int apMissing(int arr[],int n)
{
	int d=(arr[n-1]-arr[0])/n;
	int s=0,e=n-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(arr[mid]==arr[0]+mid*d)
		{
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	return arr[0]+s*d;
}
int main() {
    int arr[] = {2, 4, 6, 10, 12, 14}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingElement = apMissing(arr, n);
    cout << "The missing element is: " << missingElement << endl;

    return 0;
}