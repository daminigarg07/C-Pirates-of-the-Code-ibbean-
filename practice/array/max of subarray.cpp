#include <bits/stdc++.h>
using namespace std;
int max_subarray(int a[],int n)
{
	int maxs=0,curr=0;
	for(int i=0;i<n;i++)
	{
		curr=curr+a[i];
		if(maxs<curr)
		{
			maxs=curr;
		}
		if(curr<0)
		{
			curr=0;
		}
		
	}
	return maxs;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<max_subarray(a,n)<<endl;
	return 0;
}