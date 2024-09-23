#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ,i,a;
	vector<int> ar;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a;
		ar.push_back(a);
	}
	for(auto itr=ar.rbegin();itr!=ar.rend();itr++) //doesnt actually change the values of vector
	{
		cout<<*itr<<"\t";
	}
	cout<<endl;
	for(int s:ar)
	{
		cout<<s<<"\t";
	}
	return 0;
}