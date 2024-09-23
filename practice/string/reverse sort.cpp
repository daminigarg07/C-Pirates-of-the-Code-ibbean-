#include<bits/stdc++.h>
using namespace std;
string reverseSort(string s)
{
	sort(s.begin(),s.end(),greater<char>());
	return s;
	
}
int main()
{
	string s;
	cin>>s;
	cout<<endl<<reverseSort(s);
	return 0;
}
