class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0, rightSum=0, sum=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

        }
        if(nums.size()!=0){
        rightSum = sum - nums[0];
        if(leftSum==rightSum){
            return 0;
        }
        }
        rightSum = 0;
        for(int i=1; i<nums.size(); i++){
            leftSum = leftSum + nums[i-1];
            rightSum = sum -nums[i]-leftSum;
            cout<<rightSum;
            if(leftSum==rightSum){
                return i;
            }
        }
        return -1;


    }
};
