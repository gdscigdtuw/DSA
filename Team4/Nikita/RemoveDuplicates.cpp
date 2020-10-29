class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int t = nums.size();
        if( t == 0)
        {
            return 0;
        }
        int p = nums[0];
        int j = 1;
        for(int i = 1 ; i < t; i++)
        {
            if(nums[i] != p)
            {
               
                p = nums[i];
                nums[j] = p;
                j++;
            }
            
        }
        
        return j ;
    }
};
