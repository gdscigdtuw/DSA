/* By Kanika Tyagi 
Ques: Missing Number
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Ans:*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=(n*(n+1))/2;
        int sum2=0;
        for(int i=0; i<n; i++){
            sum2+=nums[i];
        }
        return sum1-sum2;
    }
};
