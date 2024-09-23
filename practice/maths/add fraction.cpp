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
	int a,d1,b,d2;
	cin>>a>>d1>>b>>d2;
	int lcm=(d1*d2)/(gcd(d1,d2));
	a=a*(lcm/d1);
	b=b*(lcm/d2);
	int c=a+b;
	// to reduce form divide bt gcd
	int e=gcd(c,lcm);
	c=c/e;
	int d=lcm/e;
	cout<<endl<<c<<"/"<<d;
	return 0;
}