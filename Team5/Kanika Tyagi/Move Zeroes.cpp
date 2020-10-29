/*
Ques: Moves Zeores
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Ans:
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0,j=0; i<nums.size(); i++){
            if(nums[i]!=0){
               swap(nums[j++],nums[i]);
            }
        }
    }
};
