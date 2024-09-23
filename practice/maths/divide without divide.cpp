#include<bits/stdc++.h>
using namespace std;
int divide(int n, int d) 
{
	if(n==INT_MIN && d==-1)
	{
		return INT_MIN;
	}
        int q = 0;
        if (n == 0 || d == 0)
            return 0;
          
        int sign = (n > 0) ^ (d > 0);
        n = abs(n);
        d = abs(d);
        while (n >= d) {
            n -= d;
            q++;
        }
        if (sign)
            q= -q;

        if (q > INT_MAX)
            return INT_MAX;
        else if (q < INT_MIN)
            return INT_MIN;
        else
            return q;
    }
int main()
{
	long n ,d;
	cout<<"enter no: ";
	cin>>n>>d;
	cout<<endl<<divide(n,d);
	return 0;
	
}