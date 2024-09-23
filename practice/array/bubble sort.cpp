#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int> &v)
{
	int i,j;
	for(i=0;i<v.size();i++)
	{
		for(j=0;j<v.size()-1-i;j++)
		{
			if(v[j]>v[j+1])
			swap(v[j],v[j+1]);
		}
	}
}
int main() {
    vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    bubble(v);
    cout << "Sorted array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}