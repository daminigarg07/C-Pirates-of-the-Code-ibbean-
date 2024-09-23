#include<bits/stdc++.h>
using namespace std;

int dup(vector<int> v)
{
	unordered_set<int> seen;
	for(int e:v)
	{
		if(seen.find(e)!=seen.end())
		{
			return e;
		}
		seen.insert(e);
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int c=dup(v);
	cout<<endl<<c;
	return 0;
}