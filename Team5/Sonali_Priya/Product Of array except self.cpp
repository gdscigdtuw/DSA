class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_pro(n, 1);
        vector<int> right_pro(n, 1);
        vector<int> pro_nums(n, 1);
        for(int i=1; i<n; i++){
            left_pro[i] = left_pro[i-1]*nums[i-1];
        }
        for(int i=n-2; i>=0; i--){
            right_pro[i] = right_pro[i+1]*nums[i+1];
        }
        for(int i=0; i<n; i++){
            pro_nums[i] = left_pro[i]*right_pro[i];
        }
        return pro_nums;
    }
};
