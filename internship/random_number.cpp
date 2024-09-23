
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x=0;
	srand(time(0));
	int a = rand()%100;
	cout<<"Enter a digit: ";
	cin>>x;
	while(x!=a)
	{
		cout<<" The difference between numbers is:  ";
		cout<<a-x<<endl;
		cout<<"Try again:  ";
		cin>>x;
	}
	cout<<" Congratulatins!! the digit is:  ";
	cout<<a;

	return 0;
}
