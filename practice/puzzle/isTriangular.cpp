#include<bits/stdc++.h>
using namespace std;
int isTriangular(int n)
{
    int sum=0;
    int i=1;
    do
    {
        sum+=i;
        if(sum==n)
        {
            return 1;
        }
        else if(sum>n)
        {
            return 0;
        }
        ++i;
    
    }while(i<n);
    return 0;
}
int main()
{
	int n;
	cin>>n;
	cout<<endl<<isTriangular(n);
	return 0;
}
    