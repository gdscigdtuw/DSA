class Solution {
    public int missingNumber(int[] nums) {
        int arrSum = 0;
        int fullSum = 0;
        for (int i = 0; i < nums.length; i++) {
            arrSum += nums[i];
            fullSum += i + 1;
        }
        return fullSum - arrSum;
    }
}