#include <bits/stdc++.h>
using namespace std;
long long int fac(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	return n*fac(n-1);
}
int main()
{
	//npr
	int n,r;
	cin>>n>>r;
	long long int npr=fac(n)/fac(n-r);
	cout<<endl<<npr;
	return 0;
}