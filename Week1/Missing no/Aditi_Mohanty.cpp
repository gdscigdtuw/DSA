class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]!=nums.size())
            return nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
                return i;
        }
        return -1;
    }
};