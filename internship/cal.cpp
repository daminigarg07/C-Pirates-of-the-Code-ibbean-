#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	char c;
	string y;
	
	do
		{
	cout<<"Enter two number:  ";
	cin>>a;
	cout<<endl;
	cin>>b;
	cout<<"Enter the operation(+ , - , * , /):";
	cin>>c;
	
		
	switch(c)
		{
			case '+':cout<<"sum: " <<a+b;
			break;
			case '-':cout<<"diffrence: " <<a-b;
			break;
			case '*':cout<<"product: "<<a*b;
			break;
			case '/':cout<<"division: "<<a/b;
			break;
			default: cout<<"Invalid";
		}
	cout<<endl<<" Do you want to continue(yes/no): ";
	cin>>y;	
	}while (y=="yes");
	
	return 0;	
}