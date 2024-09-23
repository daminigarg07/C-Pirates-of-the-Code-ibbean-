#include<bits/stdc++.h>
using namespace std;
int main()

{
	int m;
	cout<<"enter size of array: ";
	cin>>m;
	int a[m];
	cout<<"enter element:  ";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	int n;
	cout<<"enter size of array: ";
	cin>>n;
	int b[n];
	cout<<"enter element:  ";
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int c[n+m];
	int i=0,j=0,k=0;
	
	while (i < m && j < n) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < m) {
        c[k++] = a[i++];
    }

    
    while (j < n) {
        c[k++] = b[j++];
    }
	
	for(i=0;i<n+m;i++)
	{
		cout<<c[i]<<"  ";
	}
	return 0;
}