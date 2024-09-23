#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , i , j ,k;
	int a[50];
	cout<<" Enter size of array: ";
	cin>>n;
	cout<<"Enter values: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<endl;
	}
	cout<<" Sorted: "<<endl;
	
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
return 0;	
}