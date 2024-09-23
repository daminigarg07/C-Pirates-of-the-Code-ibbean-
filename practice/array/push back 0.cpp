#include<bits/stdc++.h>
using namespace std;
void pushBack0(vector<int> &v)
{
	int n=v.size();
	int index0=0;
	for(int i=0;i<n;i++)   //push all 0 at front than replace all last with 0;
	{
		if(v[i]!=0)
		{
			v[index0]=v[i];
			index0++;
		}
	}
	for(index0;index0<n;index0++)
	{
		v[index0]=0;
	}
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
    pushBack0(v);
    for (auto num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}