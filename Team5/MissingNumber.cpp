class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int expectedsum = (size*(size+1))/2;
        int actualsum = 0;
        for(int i = 0; i < size; i++){
            actualsum += nums[i];
        }
        int missingnum = expectedsum - actualsum;
        return missingnum;
    }
};
