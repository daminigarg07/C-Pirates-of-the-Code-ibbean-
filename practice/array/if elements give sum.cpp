#include <bits/stdc++.h>
using namespace std;

bool ifsum(int a[],int n,int s)
{
	sort(a,a+n);
	int i=0,j=n-1;
	while(i<j)
	{
		if(a[i]+a[j]==s)
		{
			return true;
		}
		else if(a[i]+a[j]>s)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	return false;
	
}
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<ifsum(a,n,s)<<endl;
	return 0;
}