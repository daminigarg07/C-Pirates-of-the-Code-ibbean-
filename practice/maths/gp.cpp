#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,d,n,an,i;
	cin>>a1>>a2;
	d=a2/a1;
	an=a1;
	cin>>n;
	cout<<a1<<"\t";
	for (i=1;i<=n;i++)
	{
		an=an*d;
		cout<<an<<"\t";
	}
	return 0;
}