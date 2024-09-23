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
	int n,k,i;
	cout<<"enter element to insert: ";
	cin>>n>>k;
	if(k>=0 &&k<m)
	{
		for(i=m-2;i>=k;i--)
		{
			a[i+1]=a[i];
		}
		a[k]=n;
	}
	else
	{
		cout<<"invalid"<<endl;
	}
	
	for(i=0;i<m;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}