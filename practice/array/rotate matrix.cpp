class Solution {
public:
    void rotate(vector<vector<int>>& m) 
    {
        int row=m.size();
        for(int i=0;i<row;i++)
        {
            for(int j=i;j<row;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
        for (auto& x:m)
        {
            reverse(x.begin(),x.end());
        }      
    }
};