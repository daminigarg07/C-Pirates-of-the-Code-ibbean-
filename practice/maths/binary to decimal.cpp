#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,s=0,i=0;
	cin>>a;
	cout<<endl;
	while(a!=0)
	{
		s=s+((a%10)*pow(2,i));
		a=a/10;
		i++;
	}
	cout<<s;
	return 0;
	
}