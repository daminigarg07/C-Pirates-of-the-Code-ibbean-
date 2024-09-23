#include<bits/stdc++.h>
using namespace std;
int mincount(vector<int> v,int n,int k)
{
	int s=0;
	int e=n-1;
	int count=0;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(v[mid]<=k)
		{
			count=mid+1;
			s=mid+1;
		}
		else if(v[mid]>k)
		{
			e=mid-1;
		}
	}
	return count;
}
int main()
{
	int n, k;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements of nums1 array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout<<"enter no to find less than n equal to: ";
    cin>>k;
    cout<<endl<<mincount(v,n,k);

    return 0;
}