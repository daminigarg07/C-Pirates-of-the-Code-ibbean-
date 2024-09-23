#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if((n&n-1)==0)
		{
			cout<<endl<<"yes";
		}
	else
	{
		cout<<endl<<"no";
		}	
	return 0;
}