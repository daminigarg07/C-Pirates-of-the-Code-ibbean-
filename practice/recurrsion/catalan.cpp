#include<bits/stdc++.h>
using namespace std;
int catalan(int n)
{
	if(n==1 ||n==0)
	{
		return 1;
	}
	return ((4*n-2)*catalan(n-1))/(n+1);
}
int main()
{
	int n;
	cin>>n;
	cout<<catalan(n);
	return 0;
}