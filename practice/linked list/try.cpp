#include <bits/stdc++.h> 
using namespace std ; 
class Base
{
    public:
    	Base()
    	{
    		cout<<"base constructor"<<endl;
		}
};
class A
{
    public:
    	A()
    	{
    		cout<<"A constructor"<<endl;
		}
};
class B:public A
{ };
class C:public A
{
	public:
		C()
		{
			cout<<"c constructor"<<endl;
		}
};
class D
{
	A a;
	public:
		D()
		{
			cout<<"D constructor"<<endl;
		}
};
int main()
{
	Base base; // call base cons
	A a; // call A cons
	B b; // call A for inheritance
	C c; // first A then C
	D d; // call A for A a then D
	
	return 0;
}


 

