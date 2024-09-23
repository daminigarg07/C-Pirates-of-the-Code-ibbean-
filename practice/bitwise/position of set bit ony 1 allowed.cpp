#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float x=log2(n);
	if(x==int(x))
	{
		cout<<endl<<"position of on;y set bit is  "<<int(x);
		}	
	else
	{
		cout<<endl<<"invalid";
		}	
	return 0;
}