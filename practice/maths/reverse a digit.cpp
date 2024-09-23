#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s=""; 
	cin>>n;
	while(n!=0)
	{
		int a=n%10;
		s=s+to_string(a);
		n=n/10;
	}
	cout<<s;
	return 0;
	
}