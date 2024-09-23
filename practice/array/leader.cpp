#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(int a[],int n) // if element is greater than all right of it
{
	vector<int> v;
	int maxr=a[n-1];
	v.push_back(maxr);
	for (int i=n-2;i>=0;i--)
	{
		if(a[i]>=maxr)
		{
			v.push_back(a[i]);
			maxr=a[i];
		}
	}
	return v;
}
int main()
{
       long long n;
       cout<<"no of elements: ";
       cin >> n;//total size of array
        
        int a[n];
        
     cout<<"enter elements:  ";
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
       
        //calling leaders() function
        vector<int> v =leaders(a, n);
        cout<<endl<<endl;
        //printing elements of the vector
        for(auto it : v){
            cout << it << " ";
        
        
        cout << endl;

   }
}