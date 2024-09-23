#include <bits/stdc++.h>
using namespace std;

/*long long int largestPrimeFactor(int N)
    {
        long long num = 2;
        // loop till sqrt(N)
        while ((num * num) <=N)
        if (N % num == 0) // if num divides N evenly
            N /= num; // divide N by num
        else
            num++; // increase num if it don't divide N
        return N;
    }
    
    */


bool isprime(int n)
{
	//if a no is divisible by any no b/w 2 to n/2 --> not prim
	bool prime=true;
	if(n==1)
	{
		return false;
	}
	for (int i=2;i<=sqrt(n);i++)
	{  
	  if(n%i==0)
		{
			prime=false;
			break;
		}
	}
	
	return prime;
}
int main()
{
	int n=0,maxx=0,i=0;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(isprime(i))
			{
				maxx=max(i,maxx);
			}
			if(isprime((n/i)))
			{
				maxx=max(n/i,maxx);
			}
			
		}		
	}
	cout<<endl<<maxx<<endl;
	cout<<isprime(n);
	return 0;
}

