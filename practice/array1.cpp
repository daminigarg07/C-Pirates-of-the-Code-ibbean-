#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={10,20,30,40,50};
	int *p;
	p=a;
	p=&a[1]; //a[1]=*(a+1) p get address of a[1]
	cout<<p[1];  //p[1]=*(p+1)  next element from where p start
	cout<<endl<<&a[4]-&a[0]; //4 
	//cout<<endl<<*p++; //postfix result will be shown next 
	//cout<<endl<<*p;
	cout<<endl<<(*p)++; // derefrence then postfix so result shown next
	cout<<endl<<a[1];
	
	cout<<endl<<p[-1];  // p start from index 1 so p[-1] go move back 1-->index 0
	cout<<endl<<p[-2];  // garbage value move beyond address 
	
	cout<<endl<<a; // base address
	cout<<endl<<&a[0];  // address of 1st element
	cout<<endl<<&a;  // address of array
	cout<<endl;		
		cout<<endl<<a+1;  // address of next elememt
			cout<<endl<<&a[0]+1;  //address of 0 element +4(int)
			cout<<endl<<&a+1;	// address of array till end	
	return 0;
}
