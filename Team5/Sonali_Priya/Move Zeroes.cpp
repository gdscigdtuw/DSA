class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i;
        int n = nums.size();
        for(i=0; i<n; i++){
            if(nums[i]==0){
                    nums.push_back(0);
                    nums.erase(nums.begin()+i);
                    i--;
                    n--;
            }
            
        }
        
    }
};
