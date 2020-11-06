class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int nonzerolocation=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[nonzerolocation++]=nums[i];
                
            }
        }
        for(int i= nonzerolocation;i<nums.size();i++){
            nums[i]=0;
        }
    }
};