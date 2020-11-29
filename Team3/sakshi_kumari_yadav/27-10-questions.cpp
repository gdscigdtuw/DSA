•	https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
           int n=nums.size();
    long long    int sum=0;
        long long int ans=-99999999999;
        for(long long int i=0;i<n;i++){
            sum+=nums[i];
            ans=max(ans, sum);
                if(sum<0)
                    sum=0;
            else if( ans<sum)
                ans=sum;
            }
        return ans;
    }
};
•	https://leetcode.com/problems/rotate-array/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse (nums,k,nums.size()-1);

    }
    void reverse (vector<int>&nums,int s,int e){
       while(s<e){
           int temp =nums[s];
           nums[s]=nums[e];
           nums[e]=temp;
           s++;
           e--;}
        }
};
•	https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int m= grid.size();
        int n=grid[0].size();
        for (int i=0; i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]<0)
                    ans++;

   return ans;                 

    }
};
