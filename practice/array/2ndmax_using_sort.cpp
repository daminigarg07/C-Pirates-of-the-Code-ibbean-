#include <bits/stdc++.h>
using namespace std;
int max2(int a[],int n)
{
	sort(a,a+n,greater<int>()); //using vector---> sort(a.begin(),a.end,greater<int>());
	                                 //rest same
	if(n<2) //less than 2 item in array
	    return -1;
	if(a[0]==a[1])
	{
		for(int i=2;i<n;i++)
		{
			if(a[i]<a[1])
			{
				return a[i];
			}
		}
		}    
	return a[1]; 
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