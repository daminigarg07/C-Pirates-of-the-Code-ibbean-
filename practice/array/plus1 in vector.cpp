#include<bits/stdc++.h>
using namespace std;
void plus1(vector<int> &v)
{
	int n=v.size();
	for(int i=n-1;i>=0;i--)
	{
		v[i]=v[i]+1;
		if(v[i]==10)   // if this condition keeps on going truee every digit is 9 will become 0 so last statement will run because no return in this if
		{
			v[i]=0;
		}
		else
		{
			return ;
		}
	}
	v.insert(v.begin(),1); // if all digits are 9;
}
int main()
{
	vector<int> v;
	int n;
	cout<<"Enter how many elements:  ";
	cin>>n;
	cout<<"enter elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	plus1(v);
	for (auto x:v)
	{
		cout<<x<<"\t";
	}
	return 0;
}