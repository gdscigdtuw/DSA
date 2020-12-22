class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum=0, l_sum=0;
        for(int i=0; i<nums.size();i++){
            tsum=tsum+nums[i];   //getting the whole sum of array
        }
        for(int i=0; i<nums.size(); i++){
            if(i!=0){
            l_sum=l_sum+nums[i-1];
            }
            if(tsum-l_sum-nums[i]==l_sum)
                return i;
       }
       return -1;
    }
};