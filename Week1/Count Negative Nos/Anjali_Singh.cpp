class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r=grid.size(), c=grid[0].size();
        int count=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
};
