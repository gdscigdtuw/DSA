class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() == 0)
            return -1;
        
        if (nums.size() == 1)
            return 0;
        
        int sum = 0;
        
        for (auto n : nums) {
            sum += n;
        }
        
        int left = 0;
        int right = sum - nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0) {
                left += nums[i-1];
                right -= nums[i];
            }
            if (left == right)
                return i;
        }
        
        return -1;
    }
};