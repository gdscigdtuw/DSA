class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int x=0,y=c-1;
        int count=0;
        while(x<r && y>=0){
            if(grid[x][y]<0){
                count+=(r-x);   
                y--;         
            }
            else    x++;      
        }
        return count;
    }
};
