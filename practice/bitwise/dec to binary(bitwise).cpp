#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=31;
	string s ="";
	while(i>=0)
	{
		if((n&(1<<i))==0)
		{
			s+='0';
		}
		else
		{
			s+='1';
		}
		i--;
	}
	cout<<endl<<s;
	return 0;
}