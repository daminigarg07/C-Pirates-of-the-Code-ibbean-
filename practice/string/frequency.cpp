#include <bits/stdc++.h>

using namespace std;

// Function to count the frequency of each character from 'a' to 'z' in a given string.
// You need to implement this function.
vector<int> countFrequency(const string& S) {
//    vector<int> v;
//    map<char,int>m;
//    for(char ch='a';ch<='z';ch++)
//    {
//    	m[ch]=0;
//	}
//	int n=S.length();
//	for(int i=0;i<n;i++)
//	{
//		m[S[i]]++;
//	}
//	for(auto e:m)
//	{
//		v.push_back(e.second);
//	}
//	return v;

    vector<int> feq(26,0);
    for(char ch:S)
    {
	    if(ch>='a' || ch<='z')
	    {
		    feq[ch-'a']++;
	    }
    }
    return feq;
}

int main() {
    int T;
    cin >> T;  // Read the number of test cases
    vector<string> test_cases(T);

    // Read all the test cases
    for (int i = 0; i < T; ++i) {
        cin >> test_cases[i];
    }

    // Process each test case
    for (const string& S : test_cases) {
        vector<int> result = countFrequency(S);
        
        // Print the result for each test case
        for (int freq : result) {
            cout << freq << " ";
        }
        cout << endl;
    }

    return 0;
}
