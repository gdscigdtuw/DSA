class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum, rightsum;
        int totalsum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalsum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            leftsum = 0;
            for(int j = 0; j < i; j++){
                leftsum += nums[j];
            }
            rightsum = totalsum - leftsum - nums[i]; 
            if(leftsum == rightsum){
                return i;
            }
        }
        return -1;
    }
};
