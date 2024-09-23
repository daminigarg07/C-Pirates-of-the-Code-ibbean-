#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if (b==0)
	{
	   return a;
	}
	return gcd(b,a%b);
}
int main()
{
	// lcm = (a*b)/gcd
	int a,b;
	cin>>a>>b;
	cout<<endl<<(a*b)/(gcd(a,b));
	return 0;
}