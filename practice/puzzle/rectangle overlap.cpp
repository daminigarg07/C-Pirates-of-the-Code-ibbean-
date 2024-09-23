#include<bits/stdc++.h>
using namespace std;
bool overlap(int l1[],int r1[],int l2[],int r2[])
{
	if(l1[0]>r2[0] || r1[0]<l2[0] ) // other rectangle's right most above 1 left most or lest most below 1 right most
    {
    	return false;
	}
	if (r2[1]>l1[1] || l2[1]<r1[1]) // rectangle lie above or below
    {
    	return false;
    }
    return true;
}
int main()
{
	int l1[2],r1[2],l2[2],r2[2];
	cin>>l1[0]>>l1[1]>>r1[0]>>r1[1]>>l2[0]>>l2[1]>>r2[0]>>r2[1];
	cout<<endl<<overlap(l1,r1,l2,r2);
	return 0;
}