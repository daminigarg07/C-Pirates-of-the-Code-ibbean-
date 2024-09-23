#include <bits/stdc++.h>
using namespace std;
bool perfectNo(int n)
{
	bool p=false;
	int m=0;
	
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n==1)
	   {
		break;
	   }
		if(n%i==0)
		{
			if(n/i==i||n/i==n)
			{
				m+=i;
			}
			else
			{
				m+=i;
				m+=(n/i);
			}
		}
	}
	if(m==n)
	   {
	   p=true;}
	return p;   
}
int main()
{
int n;
cin>>n;
cout<<endl<<perfectNo(n);
return 0;	
}