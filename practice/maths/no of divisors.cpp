#include <bits/stdc++.h>
using namespace std;
int main()
{
	//no of divisors
	//if n/i==i than 1 otherwise 2
	
	int n,d=0;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				d++;
				cout<<"\t"<<i<<"\t";
			}
			else
			{
				d+=2;
				cout<<i<<"\t"<<n/i<<"\t";
			}
		}
		
	}
	cout<<endl<<d;
	return 0;
}