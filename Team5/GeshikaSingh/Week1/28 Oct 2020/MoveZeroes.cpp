class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int size = nums.size(), non_zero_idx=0, zero_idx=0;
        
        while( zero_idx < size )
        {  
            if( nums[non_zero_idx] == 0 )
            {
                while( zero_idx < size && nums[zero_idx] == 0 )
                {
                    zero_idx++;
                }
                while( zero_idx < size && nums[zero_idx])
                {
                    swap(nums[non_zero_idx++], nums[zero_idx++]);
                }
            }
            else
            {
                zero_idx++;  non_zero_idx++;
            }
        }
    }
};
