#include <bits/stdc++.h>
using namespace std;
unsigned long long int fac(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	return n*fac(n-1);
}
int main()
{
	int n,r;
	cin>>n>>r;
	unsigned long long int ncr=fac(n)/(fac(r)*fac(n-r));
	cout<<endl<<ncr;
	return 0;
}