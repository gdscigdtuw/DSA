class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
	    int max=nums[0];
	    for(int j=0;j<nums.size();j++)
	    {
	        sum=sum+nums[j];
	        if(sum>max) max=sum;
	        if(sum<0) sum=0;
	    }
        return max;
    }
};
