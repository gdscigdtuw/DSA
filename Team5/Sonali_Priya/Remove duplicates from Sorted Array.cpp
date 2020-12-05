class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = 1;
        int n = nums.size();
        int i;
        for(i=0; i<(n-1); i++){  
            if(nums[i+1] == nums[i]){
                n = n-1;
                 for(int j=i; j<n; j++){
                    nums[j] = nums[j+1];
                 }
                i--;
            }
        }
        return n;
    }
};
