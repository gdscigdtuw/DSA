class Solution 
{
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int count=0;
        for(int m=0;m<grid.size();m++)
        {
            for(int n=0;n<grid[m].size();n++)
            {
                if(grid[m][n]<0)
                    count++;
            }
        }
        return count;
    }
};
