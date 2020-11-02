class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int rsum=0,lsum=0;
        for(int i=0;i<nums.size();i++)
        {
            rsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            rsum-=nums[i];
            if(rsum==lsum)
            {
                return i;
          }
            lsum+=nums[i];
        }
        return -1;
    }
};
