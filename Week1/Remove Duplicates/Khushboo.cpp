class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            
        for(int i=1;i<nums.size();i++)
        {  // cout<<i<<" "<<nums[i]<<" "<<endl;
            if(nums[i]==nums[i-1])
            { nums.erase(nums.begin()+i);
             i--;
            }
        }
        return nums.size();
        
    }
};


