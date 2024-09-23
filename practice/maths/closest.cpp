//closest to n divisible by m
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	n=abs(n);
	cin>>n>>m;
	int i=n%m;
	int a=max(n+i,n-i);
	cout<<a;
	return 0;
}