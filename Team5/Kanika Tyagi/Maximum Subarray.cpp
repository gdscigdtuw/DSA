/*
Ques: Maximum Subarray
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Ans:
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum>ans){
                ans=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return ans;
    }
};
