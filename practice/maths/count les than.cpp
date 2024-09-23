#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cin>>q;
	int query[q];
	for(int i=0;i<q;i++)
	{
		cin>>query[i];
	}
	for (int i=0;i<q;i++)
	{
		int n=query[i];
		int cnt=0;
		for(int j=0;j<n;j++)
		{
			if(b[j]<=a[n])
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}