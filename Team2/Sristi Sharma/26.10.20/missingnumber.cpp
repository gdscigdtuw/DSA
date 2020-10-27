class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total = (nums.size()) * (nums.size() + 1) / 2;
        int sum=0;
    for (int i = 0; i < nums.size(); i++)
        sum+=nums[i];
    return total-sum;
        
    }
};
