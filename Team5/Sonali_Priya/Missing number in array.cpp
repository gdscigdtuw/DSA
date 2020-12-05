class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_nums;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum_nums += nums[i];
        }
        int sum_n_natural_no = (n*(n+1))/2;
            int missing_no = sum_n_natural_no - sum_nums;
        return missing_no;
    }
};
