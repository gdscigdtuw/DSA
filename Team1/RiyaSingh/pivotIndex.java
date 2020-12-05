class Solution {
    public int pivotIndex(int[] nums) {
        int lsum = 0, rsum = 0;
        for(int i = 0; i<nums.length; i++){
            for(int j = 0; j< i; j++){
                lsum += nums[j];
            }
            for(int j=i+1; j<nums.length; j++){
                rsum += nums[j];
            }
            if(lsum == rsum)
                //System.out.println(nums[i]);
                return i;
            lsum = 0;
            rsum = 0;
        }
        return -1;   
    }
    
}
