#include <bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i+=2)
	{
		cout<<a[i]<<"\t";
	}
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
	print(a,n);
	return 0;
}