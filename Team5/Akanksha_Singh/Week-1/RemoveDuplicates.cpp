class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=1,j=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                temp++;
                nums[j]=nums[i];
                j++;
            }
        }
        return temp;
    }
};
