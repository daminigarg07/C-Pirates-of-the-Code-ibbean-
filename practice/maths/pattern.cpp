#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>0;i--)
	{
		for(int j=n;j>0;j--)
		{
			for (int k=i;k>0;k--)
			{
				cout<<j;
			}
		}
		cout<<endl;
	}
	return 0;
}