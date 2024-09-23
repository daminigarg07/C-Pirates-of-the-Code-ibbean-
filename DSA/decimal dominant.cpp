#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n,i;
 	cout<<"enter value of n:";
 	cin>>n;
 	int a[n];
 	for (i=0;i<n;i++)
 	{
 		cin>>a[i];
	 }
	 int c=0;int count=0;
	 for(i=0;i<n;i++)
	 {
	 	if(count==0)
	 	{
	 		c=a[i];
	 		count=1;
		 }
		 else if(c==a[i])
		 {
		 	count++;
		 }
		 else
		 {
		 	count--;
		 }
	 }
	 count=0;
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]==c)
	 	{
	 		count++;
		 }
	 }
	 if (count>n/10)
	 {
	 	cout<<"yes: "<<c;
	 }
	 else
	 {
	 	cout<<"no";
	 }
	 return 0;
 }