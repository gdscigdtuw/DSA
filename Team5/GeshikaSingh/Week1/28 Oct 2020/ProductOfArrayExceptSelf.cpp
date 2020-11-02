class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
        vector<int> ans(n);        
        ans[0] = ans[n-1] = 1;
    
        for(int i=1;i<n;i++)
            ans[i] = ans[i-1]*nums[i-1];
        
        int post = 1;
        for(int i=n-2;i>=0;i--){
            post *= nums[i+1];   
            ans[i] *= post;
        }
        return ans;
    }
};
