#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
for(i=0,j=n-1;i<j;i++,j--)
{
	swap(a[i],a[j]);
}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl<<endl;
	
	
	reverse(a,a+n); //using in build reserse function
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	
	return 0;
}