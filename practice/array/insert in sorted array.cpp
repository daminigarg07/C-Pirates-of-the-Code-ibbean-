#include<bits/stdc++.h>
using namespace std;
int main()

{
	int m;
	cout<<"enter size of array: ";
	cin>>m;
	int a[m];
	cout<<"enter element:  ";
	for(int i=0;i<m-1;i++)
	{
		cin>>a[i];
	}
	int n,i,k;
	cout<<"enter element to insert: ";
	cin>>n;
	
		for(i=m-2;a[i]>n&&i>=0;i--)
		{
			a[i+1]=a[i];
		}
		a[i+1]=n;
	
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}