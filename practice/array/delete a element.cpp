#include<bits/stdc++.h>
using namespace std;
int main()

{
	int m;
	cout<<"enter size of array: ";
	cin>>m;
	int a[m];
	cout<<"enter element:  ";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	int n,k,i;
	cout<<"enter index to delete: ";
	cin>>k;
	if(k>=0 &&k<m)
	{
		for(i=k-1;i<m-1;i++)
		{
			a[i]=a[i+1];
		}
		
	}
	else
	{
		cout<<"invalid"<<endl;
	}
	
	for(i=0;i<m-1;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}