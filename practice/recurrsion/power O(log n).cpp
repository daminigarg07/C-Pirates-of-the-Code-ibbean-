#include<bits/stdc++.h>
using namespace std;
double power(double a, int b)
{
	if(b==0)return 1;
	if(b==1) return a;
	double half=power(a,b/2);
	if(b%2==0 )
	{
		return half*half;
	}
	else
	{
		if(b>0)
		{
			return a*half*half;
		}
		else
		{
			return (half*half)/a;
		}
	}
}
int main() {
    double a;
    int b;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the exponent (b): ";
    cin >> b;

    cout << a << "^" << b << " = " << power(a, b) << endl;

    return 0;
}