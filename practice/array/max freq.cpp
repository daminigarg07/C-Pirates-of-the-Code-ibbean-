int majorityElement(int a[], int size)
    {
        map<int,int> m;
        int x=size/2;
        int freq=-1;
        int freqi=0;
        for(int i=0;i<size;i++)
        m[a[i]]++;
        map<int, int>::iterator it = m.begin();
 
    // Iterate through the map and print the elements
    for (const auto& pair : m) 
    {
        if (pair.second > x) 
        {
            freq = pair.second;
            freqi = pair.first; 
        }
    }
    if(freq==-1)
    {
        return -1;
    }
    return freqi;
    }