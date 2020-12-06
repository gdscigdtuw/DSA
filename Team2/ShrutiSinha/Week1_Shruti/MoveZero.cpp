class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=nums.size();
        int n=0;
        for(int i=0;i<k;i++){
            if(nums[i]==0){
                n++;
            }
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
        }
        while(n--){
            ans.push_back(0);
        }
        for(int i=0;i<k;i++){
            nums[i]=ans[i];
        }
    }
};