#include<bits/stdc++.h>
using namespace std;
int BtoD(string n)
{
	int b=0;
	int t=1;
	for(int i=n.size()-1;i>=0;i--)
	{
		if(n[i]=='1')
		{
			
			b+=t;
		}
		t*=2;
	}
	return b;
}
int main()
{
	string n;
	cin>>n;
	cout<<endl<<BtoD(n);
	return 0;
}