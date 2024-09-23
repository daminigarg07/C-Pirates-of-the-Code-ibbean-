#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int x=*max_element(a,a+5);
	cout<<x<<endl;
	return 0;
}