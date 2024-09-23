#include<bits/stdc++.h>
using namespace std;
int remove_dup(vector<int> &a)
{
	set<int> s(a.begin(),a.end()); //using set
	int n=s.size();
	a.clear();
	for (auto& it : s) {
        a.push_back(it);
    }
    return n;
	
	
}
int main()
{
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
    remove_dup(v);
    cout << "Sorted array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}