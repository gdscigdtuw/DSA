/*
Ques: Count Negative Numbers in a Sorted Matrix
Given a m * n matrix grid which is sorted in non-increasing order both row-wise and column-wise. 
Return the number of negative numbers in grid.

Example 1:
Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.

Ans: 
*/
class Solution {
public:
    int findFirstNegative(vector<int> &nums){
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]>=0){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return left;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0; i<grid.size(); i++){
            int index=findFirstNegative(grid[i]);
            count+=grid[i].size()-index;
        }
        return count;
    }
};
