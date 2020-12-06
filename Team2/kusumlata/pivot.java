class Solution {
    public int pivotIndex(int[] nums) {
        int sumTotal=0;
        int sumright=0, sumleft=0;
        for(int item : nums){
            sumTotal +=item;
        }
        for(int i=0;i<nums.length;i++){
            sumright=sumTotal-sumleft-nums[i];
            if(sumleft==sumright){
                return i;
            }
            sumleft +=nums[i];
        }
        return -1;        
        
    }
}
