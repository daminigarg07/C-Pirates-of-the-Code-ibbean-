#include<bits/stdc++.h>
using namespace std;
bool rotate(string a,string b)
{
	if(a.length()!=b.length())
	{
		return false;
	}
	string concate=a+a;  //concate a to itself and check if b is a substring
	return concate.find(b)!=string::npos;
}

int main()
{
	string a,b;
	cout<<"enter 2 strings:"<<endl;
	cin>>a>>b;
	cout<<rotate(a,b);
	return 0;
}