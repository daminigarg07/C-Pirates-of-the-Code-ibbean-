#include<bits/stdc++.h>
using namespace std;
vector<int> nos(int n)
{
    vector<int> v;
    
    if(n==0)
    {
        return vector<int>();
    }
    v.push_back(n);
    vector<int> rest = nos(n-1); // Recursively call nos and store the result
    v.insert(v.end(), rest.begin(), rest.end()); // Append the result to v
    return v;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> result = nos(n);

    cout << "Array containing integers from 1 to " << n << " (in increasing order): ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
