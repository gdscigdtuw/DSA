class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max = nums[0] , sum = nums[0];
        for(int i = 1 ; i < nums.size() ; i++)
        {
            cout << max << " "; 
            if(sum + nums[i] > nums[i])
            {
                sum += nums[i];
                if(sum > max) max = sum;
            }
            else
            {
                sum = nums[i];
                 if(sum > max) max = sum;
            }
            
        }
        return max;
    }
};
