#include<bits/stdc++.h>
using namespace std;

int maxx(int a,int b)
{
	return max(a,b);
	
}

int any_op(vector<int> &v, int(*func)(int,int))
{
	int ans=v[0];
	for(auto x:v)
	{
		ans=func(x,ans);
	}
	return ans;
}

int main()
{
	vector<int> v={2,4,6,8};
	cout<<any_op(v,__gcd);
	cout<<endl;
	cout<<any_op(v,maxx);
	return 0;
}