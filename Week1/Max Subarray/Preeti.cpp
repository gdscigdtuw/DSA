class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
      if(nums.size()==1)
          return nums[0];
       int sum = 0, min = 0, res = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum - min > res) res = sum - min;
            if(sum < min) min = sum;
        }
        return res; 
    }
};