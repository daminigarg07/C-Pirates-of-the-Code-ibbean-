#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> &a,int x)
{
	return find(a.begin(),a.end(),x)!=a.end();
}
bool insertt(vector<int> &a,int y,int yi)
{
	if(yi<0||yi>a.size())
	{
		return false;
	}
	a.insert(a.begin()+yi,y);
	return true;
}
bool deletee(vector<int> &a,int z)
{
	auto it=find(a.begin(),a.end(),z);
	if(it!=a.end())
	{
		 a.erase(it);
		 return true;
		
	}
	return false;
}
int main()
{
	int n=0,x=0,y=0,yi=0,z=0,m;
	vector<int>a;
	cin>>n;
	for(int i=0;i<5;i++)
	{
		cin>>m;
		a.push_back(m);
	}cin>>x>>y>>yi>>z;
	cout<<search(a,x)<<"\t";
	cout<<insertt(a,y,yi)<<"\t";
	cout<<deletee(a,z)<<"\t";
	return 0;
	
}