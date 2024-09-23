#include<bits/stdc++.h>
using namespace std;
string addBinary(string a,string b)
{
	string res="";
	int carry=0;
	int i=a.size()-1;
	int j=b.size()-1;
	while(i>=0 ||j>=0||carry)
	{
		int sum=carry;
		if(i>=0)
		{
			sum+=a[i]-'0';
			i--;
		}
		if(j>=0)
		{
			sum+=b[j]-'0';
			j--;
		}
		res+=char(sum%2+'0');
		carry=sum/2;
	}
	reverse(res.begin(),res.end());
	return res;
}
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<addBinary(a,b);
	return 0;
}