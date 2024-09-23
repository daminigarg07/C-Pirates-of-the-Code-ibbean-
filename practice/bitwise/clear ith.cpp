#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n>>i;
	i-=1;
	int a=n&(~(1<<i));
	cout<<endl<<a;

	return 0;
}