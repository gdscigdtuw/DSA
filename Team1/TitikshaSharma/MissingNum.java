//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution {
    public int missingNumber(int[] nums) {
      Arrays.sort(nums);
    int miss = -1;
    int i = 0;
    for(; i < nums.length; i++){
        if(nums[i] != i){
            miss = i;
            break;
        }
    }
        if (miss != -1)
        return miss;
        else 
            return i;
    }
}
