class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr = 0, left = 0, right = nums.size();
        while( left < right )
        {
            while( left < right && nums[curr] == nums[left] )
                ++left;
            if( left < right && nums[curr] != nums[left] )
                nums[curr+1] = nums[left];
            ++curr;
        }
        return curr;
    }
};
