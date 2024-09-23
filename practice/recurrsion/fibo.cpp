#include<bits/stdc++.h>
using namespace std;
int fab(int n)
{
	if(n==0 ||n==1)
	{
		return n;
	}
	return fab(n-2)+fab(n-1);
}
int fac(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return n*fac(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<fab(n);
	cout<<"\n"<<"fac: "<<fac(n);
	return 0;
}