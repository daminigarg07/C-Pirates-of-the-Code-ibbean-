#include<bits/stdc++.h>
using namespace std;
/*To find the number of trailing zeroes in the factorial of an integer N
N, you need to count the number of times the factorial includes a factor of 10, which is equivalent to counting the number of pairs of 2s and 5s in the prime factorization ofN!
N!, as 10 = 2 × 5.
Since the number of 5s in the prime factorization of N!
N! will always be less than or equal to the number of 2s, you only need to count the number of 5s.*/
int trail0(int n)
{
	int count=0;
	int i=5;
	while(n/i>=1)
	{
		count+=n/i;
		i*=5;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	cout<<endl<<trail0(n);
	return 0;
}