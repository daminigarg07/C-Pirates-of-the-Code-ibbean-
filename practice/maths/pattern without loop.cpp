#include <bits/stdc++.h>
using namespace std;
int pp(int n)
{   if(n==1)
	{
		return 1;
	}
	cout<<n<<" ";
	return pp(n-1);
}
int main()
{
	int a=pp(5);
	cout<<a;
	return 0;
}