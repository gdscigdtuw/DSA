/*Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.*/

class Solution {
    public int removeDuplicates(int[] nums) {
        int j = 1;
        for(int i = 1; i < nums.length; i++){
            if (nums[i] != nums[i-1]){
                nums[j++] = nums[i];
            }
        }
        return j;
        
    }
}
