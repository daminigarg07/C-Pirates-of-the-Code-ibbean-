#include<bits/stdc++.h>
using namespace std;
vector<int> corpFlightBookings(vector<vector<int>>& arr, int n) 
    {
        vector<int> v(n,0);
        int m=arr.size();
        for(int i=0;i<m;i++)
        {
            int a=arr[i][0]-1;
            int b=arr[i][1]-1;
            int k=arr[i][2];
            v[a]+=k;
            if(b+1<n)
            {
                v[b+1]-=k;
            }
        }
        for(int i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        return v;
    }
    int main() {
    vector<vector<int>> bookings = {
        {1, 2, 10},
        {2, 3, 20},
        {2, 5, 25}
    };
    int n = 5;

    vector<int> result = corpFlightBookings(bookings, n);
    
    cout << "Seats booked for each flight: ";
    for (int seats : result) {
        cout << seats << " ";
    }
    cout << endl;

    return 0;
}