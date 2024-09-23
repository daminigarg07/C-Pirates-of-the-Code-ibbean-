#include <bits/stdc++.h>
using namespace std;
pair<long long,long long> minmax(int a[],int n)
{
	long long min=a[0] , max=a[0];
	pair<long long,long long> p;
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		else if(a[i]>max)
		{
			max=a[i];
		}
	}
	/*p.first=min;
	p.second=max;
	return p;*/
	return make_pair(min,max);
	
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
	pair<long long,long long> r=minmax(a,n);
	cout<<endl<<r.first<<"\t"<<r.second;
	return 0;
}