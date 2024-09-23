#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int count=0;
	
	while(a>0 || b>0)
	{
		int c=max(a,b);
		if((a&1)!=(b&1))
		{
			count++;
		}
		a=a>>1;
		b=b>>1;
		
	}
	cout<<endl<<count;

	return 0;
}