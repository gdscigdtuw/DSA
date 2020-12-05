class Solution {
    public:
    int maxSubArray(vector<int>& nums) {
        int maxhere=nums[0];
    int maxtotal=nums[0];
    
    for(int i=1;i<nums.size();i++)
        {
        maxhere = max(nums[i],maxhere+nums[i]);
        maxtotal = max(maxhere,maxtotal);
        
    }
    return maxtotal;
    
}
};
