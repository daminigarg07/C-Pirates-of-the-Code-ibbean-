#include<bits/stdc++.h>
using namespace std;
int Helper(int num, int rev=0) {
    if (num == 0) {
        return rev;
    }
    return Helper(num / 10, rev * 10 + num % 10);
}
bool palinInt(int num)
{
	if(num<0)
	{
		return false;
	}
	return (num==Helper(num));
}
int main()

{
	int n;
	cin>>n;
	cout<<palinInt(n);
	return 0;
}
