class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        vector<int> subsum ; 
        
        int max = nums[0];
        
        int length = nums.size();
        
        subsum.push_back(nums[0]);
        
        for(int i = 1 ; i < length ; i++)
        {
            
            if((subsum[i-1]+nums[i]) > nums[i])
            {
                subsum.push_back(subsum[i-1]+nums[i]);
            }
            else
            {
                subsum.push_back(nums[i]);
            }
            
            if(subsum[i] > max)
                max = subsum[i];
            
            
        }
        
        return max;
   
    }
};
