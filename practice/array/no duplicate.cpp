#include <bits/stdc++.h>
using namespace std;

int noduplicate(int a[],int n)
{
	int j=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]!=a[j])
		{
			j++;
			a[j]=a[i];
		}
	}
	return j+1;
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
	
	int j=noduplicate(a,n);
	
	for(int i=0;i<j;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}