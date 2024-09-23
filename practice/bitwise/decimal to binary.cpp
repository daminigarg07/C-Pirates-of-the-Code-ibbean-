#include<bits/stdc++.h>
using namespace std;
string DtoB(int n)
{
	string b="";
	while(n>0)
	{
		if(n%2==1)
		{
			b=b+"1";
		}
		else
		{
			b=b+"0";
		}
		n=n/2;
	}
	reverse(b.begin(),b.end());
	return b;
}
int main()
{
	int n;
	cin>>n;
	cout<<endl<<DtoB(n);
	return 0;
}