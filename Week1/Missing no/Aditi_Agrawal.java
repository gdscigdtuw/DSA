class Solution {
    public int missingNumber(int[] nums) {
        int expectedSum=(nums.length*(nums.length+1))/2;
        int actualSum=0;
        for(int i=0; i<nums.length; i++){
            int num=nums[i];
            actualSum+=num;
        }
        return expectedSum-actualSum;
    }
}