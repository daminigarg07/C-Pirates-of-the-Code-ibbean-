#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n>>i;
	//1: right shift i times
	//   display last bit
	
	int a=n>>i;
	cout<<endl<<(a&1);
	
	//2. left shift 1 i times
	//   AND if 0 then 0 els 1
	
	int b=1<<i;
	if((n&b)==0)
	cout<<endl<<0;
	else
	cout<<endl<<1;
	return 0;
}