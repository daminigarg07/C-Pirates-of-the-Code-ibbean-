#include <bits/stdc++.h>
using namespace std;
int max2(int a[],int n)
{
	int max=a[0],sm;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			sm=max;
			max=a[i];
		}
		if(a[i]>sm&&a[i]<max)
		{
			sm=a[i];
		}
	}
	return sm;
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

	cout<<endl<<max2(a,n);
	return 0;
}