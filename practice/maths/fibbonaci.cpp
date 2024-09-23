#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
	if (n==1||n==0)
	{ 
	  return 1;
	}
	return(fibo(n-2)+fibo(n-1));
}
int main()
{
	int a;
	cin>>a;
	cout<<fibo(a);
	return 0;
}
