#include<bits/stdc++.h>
using namespace std;


long long int toh(int n) {
    if (n == 1) 
	{
        return 1;
    }
    return 2*toh(n - 1)+1;
    //return pow(2,n)-1;
}
int main()
{
	int n;
	cin>>n;
	cout<<toh(n);
	return 0;
}