int findFloor(vector<long long> &v, long long n, long long x) 
{
    int s = 0;
    int e = n - 1;
    int result = -1; // Variable to store the result

    while (s <= e) // Change condition to s <= e
    {
        int mid = s + (e - s) / 2;
        if (v[mid] <= x) // If v[mid] is less than or equal to x
        {
            result = mid; // Update result
            s = mid + 1; // Move right to find a larger floor
        }
        else
        {
            e = mid - 1; // Move left
        }
    }

    return result; // Return the index of the floor
}
