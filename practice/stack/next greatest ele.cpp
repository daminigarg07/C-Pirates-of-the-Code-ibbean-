#include<bits/stdc++.h>
using namespace std;

vector<int> nextgreatestEle(vector<int>& a) {
    stack<int> s;
    int n=a.size();                                               
    vector<int> res(n,-1);

    for (int i=0;i<n;i++) {
        while (!s.empty() && a[s.top()]<a[i]) 
		{
            res[s.top()]=a[i];
            s.pop();
        }
        s.push(i);
    }

    return res;
}
int main() {
    vector<int> nums;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a;
    	nums.push_back(a);
	}
    vector<int> result = nextgreatestEle(nums);

    cout << "Next greater elements are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}