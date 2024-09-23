#include<bits/stdc++.h>
using namespace std;
void revv(vector<int> arr,int i)
{
	if(i==0)
	{
		cout<<arr[0]<<"\n";
		return;
	}
	cout<<arr[i]<<" ";
	revv(arr,i-1);
}
void revS(vector<int> arr,int i)
{
	int n = arr.size();
    if (i == n) {
       
        return;
    }
    revS(arr, i + 1);
    cout << arr[i] << " ";
}
 int summ(vector<int> arr,int i)
{
	int n=arr.size();
	if(i==n)
	{
		return -1;
	}
	return arr[i]+summ(arr,i+1);
	
}
int maxx(vector<int> arr,int i)
{
	int n=arr.size();
	if(i==n)
	{
		return 0 ;
	}
return max(arr[i],maxx(arr,i+1));
}
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	revv(a,n-1);
	revS(a,0);
	cout<<"\n";
    cout<<summ(a,0);
    cout<<"\n";
    cout<<maxx(a,0);
	return 0;
}