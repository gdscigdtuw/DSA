class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        if(nums.size()<1){
            return ans;
        }
        
        int product=1;
        for(int i=0; i<nums.size(); i++){
            product = product *nums[i];
            ans.push_back(product);
        }
        
        product=1;
        for(int i=nums.size()-1; i>0; --i){
            ans[i]= ans[i-1]*product;
            product=product*nums[i];
        }
        ans[0]= product;
        return ans;
    }
};