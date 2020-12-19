 
 class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 =  n * (n+1) /2 ;
        int sum2 = accumulate(nums.begin(),nums.end(), sum2);
        return sum1 - sum2 ; 
    }
};
