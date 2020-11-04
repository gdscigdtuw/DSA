/*
Ques: Product of Array Except Self
Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:
Input:  [1,2,3,4]
Output: [24,12,8,6]

Ans:
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> output(n,1);
        output[0]=1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int r=1;
        for(int j=n-1; j>=0; j--){
            output[j] = output[j] * r;
            r*=nums[j];
        }
        return output;
    }
};
