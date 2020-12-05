class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        for(int i=0; i<n; i++){
            nums.push_back(start+ (2*i));
        }
        for(int i=0; i<n-1; i++)
            nums[i+1] = nums[i]^nums[i+1];
        return nums[n-1];
    }
};
