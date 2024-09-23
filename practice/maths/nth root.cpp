//b^x=a
// logb(a)=x  -->log of a base b
// logb(a)=x ---> log(a)/log(b)=x

// to get b ---->pow(a,1/x)
#include <bits/stdc++.h>
using namespace std;
int Root(int a, int b)
{
	int x;
	x=log2(a)/log2(b);
	return x;
}
double nRoot(int a, int x)
{
	double b=pow(a,1.0/x);

	return b;
}
int main()
{
	int a,b;
	cin>>a>>b;

	cout<<endl<<nRoot(a,b);
	return 0;
}