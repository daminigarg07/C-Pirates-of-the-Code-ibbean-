#include <bits/stdc++.h>
using namespace std;


double calMean( vector<int>& v) {
    double sum = 0;
    for (int num : v) {
        sum += num;
    }
    return sum / v.size();
}


double calMedian(vector<int> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    /*if (n % 2 == 0) {
        return (v[n / 2 - 1] + v[n / 2]) / 2.0;
    } else {
        return v[n / 2];
    } */
    return (n%2)?v[n/2]:(v[n/2-1]+v[n/2])/2.0;
}

int calMode( vector<int>& v) {
	unordered_map<int,int> freq;
	for(int num: v)
	{
		freq[num]++;
	}
    int mode=v[0];
    int maxcount=0;
    for( auto pair:freq)
    {
    	if(pair.second>maxcount)
    	{
		maxcount=pair.second;
    	mode=pair.first;
		}
	
	}
    	return mode;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate mean, median, and mode
    double mean = calMean(arr);
    double median = calMedian(arr);
    int mode = calMode(arr);

    // Print the results
    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;
    if (mode == numeric_limits<int>::min()) {
        cout << "Mode: No unique mode" << endl;
    } else {
        cout << "Mode: " << mode << endl;
    }

    return 0;
}
