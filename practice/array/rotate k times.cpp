#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &v,int k)
{
	int n=v.size();
	k%=n; // handle larger k size ****
	reverse(v.begin(),v.end());
	reverse(v.begin(),v.begin()+k);
	reverse(v.begin()+k,v.end());
	
}
int main()
{
	int n, k;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements of nums1 array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout<<"enter no of times to rotate array: ";
    cin>>k;
    rotate(v,k);
    for (auto num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}