#include<bits/stdc++.h>
using namespace std;
//int i=0; //global variable
int main()
{
	//int i=1;  //local variable so infinite
	static int i=0 ; //life of i is equal to life of progarm 
	// only executed 1 time
	cout<<"hello\t";
	i++;
	if(i<=5)
	main();
	return 0;
}