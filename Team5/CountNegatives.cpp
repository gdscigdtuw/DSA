class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
      int result=0;
      int i=0;
      int x=grid.size();
      int j=grid[0].size()-1;
      while(i<x&&j>=0)
      {
         if(grid[i][j]>=0)
           i++;
         else
         {
           result=result+x-i;
           j--;  
         }
      }
        return result;
    }
};
