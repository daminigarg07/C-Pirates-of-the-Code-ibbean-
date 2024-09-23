#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> ar)
{
	vector<int> v;
	int n=ar.size();
	int pref=1;
	int suf=1;
	for(int i=0;i<n;i++)
	{
		v.push_back(pref);
		pref*=ar[i];
	}
	for(int i=n-1;i>-1;i--)
	{
		v[i]*=suf;
		suf*=ar[i];
	}
	return v;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> result = productExceptSelf(nums);
    
    cout << "The product of all elements except self for each element is: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}