#include<bits/stdc++.h>
using namespace std;

bool palS(string v,int start,int end)
{
	if(start>=end)
	return true;
	if(v[start]!=v[end])
	{
		return false;
	}
	return palS(v,start+1,end-1);
}
bool palSS(string s)
{
    int n=s.length();
	if(n<2)
	{
		return true;
	}
	
	if(s[0]!=s[n-1])
	{
	    return false;
	}
	s=s.substr(1,n-2);
	return palSS(s);
	
	
}
int main() {
   string s;
   cin>>s;
   int n=s.length()-1;

    cout << "String is palindrome: " <<palS(s,0,n) << endl;
    cout << "String is palindrome: " <<palSS(s) << endl;

    return 0;
}