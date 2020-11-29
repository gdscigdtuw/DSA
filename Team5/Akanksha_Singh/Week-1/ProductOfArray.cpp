class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
        vector<int>ans(n);
        ans[0] = 1;
        int left = nums[0];
        for(int i = 1;i<n;i++)
        {
            ans[i] = left;
            left *= nums[i];
        }
        int right = nums[n-1];
        for(int i = n -2;i>= 0;i--)
        {
            ans[i] *= right;
            right *= nums[i]; 
        }
        return ans;
    }
};
