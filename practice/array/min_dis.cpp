#include<bits/stdc++.h>
using namespace std;
int min_dis(int a[],int n ,int x,int y)
{
	int mind=INT_MAX;
	int indx=-1;
	int indy=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			indx=i;
			if(indy!=-1)
			mind=min(mind,abs(indx-indy));
		}
		if(a[i]==y)
		{
			indy=i;
			if(indx!=-1)
			mind=min(mind,abs(indx-indy));
		}
		
	}
	if(indx==-1 ||indy==-1)
	{
		return -1;
	}
	return mind;
}
int main()
{
       long long n;
       int x,y;
       cout<<"no of elements: ";
       cin >> n;//total size of array
        cout<<"x : ";
       cin >> x;
       cout<<"y : ";
       cin >> y;
       
        int a[n];
        
     cout<<"enter elements:  ";
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
       
        //calling leaders() function
        int v =min_dis(a, n,x,y);
        cout<<endl<<endl<<v;
        
        
        
        cout << endl;

   return 0;
}