class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n1=0,n2=0;
       for(int i=0;i<nums.size();i++) 
       {
          n1+=nums[i];
          n2+=i+1;
       }
        return n2-n1;
    }
};
