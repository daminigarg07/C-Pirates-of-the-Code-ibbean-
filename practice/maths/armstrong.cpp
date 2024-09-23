#include <bits/stdc++.h>
using namespace std;
bool armstrong(int n)
{
	int sum=0;
	int a=n;
	for(int i=0;i<3;i++)
	{
		sum=sum+pow((n%10),3);
		n=n/10;
	}
	if(sum==a)
	{
		return true;
	}
	return false;
}
int main()
{
	
	cout<<armstrong(153);
	return 0;
}