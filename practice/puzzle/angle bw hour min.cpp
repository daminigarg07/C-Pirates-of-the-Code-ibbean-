#include<bits/stdc++.h>
using namespace std;
int angle(int H,int M)
{
	float aH=0.5*(H*60+M);
	float aM=6*M;
	float ang=abs(aH-aM);
	return floor(min(ang,360-ang));
}
int main()
{
	int h,m;
	cin>>h>>m;
	cout<<endl<<angle(h,m);
	return 0;
}