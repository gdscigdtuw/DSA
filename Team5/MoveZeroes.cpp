class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int countzero = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] == 0){
                countzero++;
            }
        }
        vector<int> sorted;
        for(int i = 0; i < size; i++){
            if(nums[i] != 0){
                sorted.push_back(nums[i]);
            }
        }
        while(countzero--){
            sorted.push_back(0);
        }
        for(int i = 0; i < size; i++){
            nums[i] = sorted[i];
        }
    }
};
