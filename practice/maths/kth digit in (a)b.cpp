#include <bits/stdc++.h>
using namespace std;
int main()
{
	//kth digit in a**b
	int a,b,k,j;
	cin>>a>>b>>k;
	int s=pow(a,b);

	for(int i=0;i<k;i++)
	{
		j=s%10;
		s=s/10;
	}
	cout<<j;
	return 0;
}