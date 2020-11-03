class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int k = 0;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]!=0)
            {
                nums[k] = nums[i]; // move non zeroes ahead
                
                if(k!=i)
                nums[i]=0;
                
                 k++;
            }
        }
 
    }
};
