#include <bits/stdc++.h>
using namespace std;
int jump(int n)
{
	int a=n,d=0;
	if(n<=10)
	{
		return n;	
	}
	while(a!=0)
    {
    	
    	d=(a%10)-d;
    	a=a/10;
	}
	if(abs(d)==1)
	{
		return n;
	}
	return jump(n-1);
	
}

int main()
{ //jumping no difference =1 or single digit
    int n=0;
    cin>>n;
    cout<<endl<<jump(n);

return 0;
}