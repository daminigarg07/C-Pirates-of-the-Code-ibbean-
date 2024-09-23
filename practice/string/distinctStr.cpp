#include<bits/stdc++.h>
using namespace std;
int distinctStr(string S)
{
	int n=S.length();
	if(n==0)
	{
		return 0;
	}
	int max_len=0;
	int j=0,i=0;
	unordered_set<char> seen;
	while(j<n)
	{
		if(seen.find(S[j])==seen.end())//S[j] not in seen set 
		{
			seen.insert(S[j]);
			max_len=max(max_len,j-i+1);
			j++;
		}
		else
		{
			seen.erase(S[i]);
			i++;
		}
		
	}
	return max_len;
}
int main()
{
	string a;
	cin>>a;
	cout<<distinctStr(a);
	return 0;
}