Problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

Solution: 

int count=0;
int countNegatives(vector<vector<int>>& grid) {
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[i].size(); j++){
            if (grid[i][j]<0)
            count+=1;
        }
    }
    return count;
}
